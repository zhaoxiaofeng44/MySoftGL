#coding=utf-8
import numpy as np
import tensorflow as tf
from PIL import Image

print(tf.__version__)
print(np.__version__)

# 自增长
gpus = tf.config.experimental.list_physical_devices('GPU')
print(gpus)
for gpu in gpus:
    tf.config.experimental.set_memory_growth(gpu, True)


# 图像的显示
def save_images(imgs, name):
    new_im = Image.new('L', (280, 280))
    index = 0
    for i in range(0, 280, 28):
        for j in range(0, 280, 28):
            im = imgs[index]
            im = Image.fromarray(im, mode='L')
            new_im.paste(im, (i, j))
            index += 1
    new_im.save(name)


# 参数
h_dim = 20
batch_size = 512

# 数据的加载
(x_train, y_train), (x_test, y_test) = tf.keras.datasets.fashion_mnist.load_data()
x_train = x_train.astype(np.float32) / 255.
x_test = x_test.astype(np.float32) / 255.

train_db = tf.data.Dataset.from_tensor_slices(x_train)
train_db = train_db.shuffle(batch_size * 5).batch(batch_size)

test_db = tf.data.Dataset.from_tensor_slices(x_test)
test_db = test_db.batch(batch_size)

print(x_train.shape, y_train.shape)
print(x_test.shape, y_test.shape)

# z的维度
z_dim = 10


# VAE模型
class VAE(tf.keras.Model):
    def __init__(self):
        super(VAE, self).__init__()

        # Encoders 编码层
        self.fc1 = tf.keras.layers.Dense(128)
        self.fc2 = tf.keras.layers.Dense(z_dim)
        self.fc3 = tf.keras.layers.Dense(z_dim)

        # Decoders 解码层
        self.fc4 = tf.keras.layers.Dense(128)
        self.fc5 = tf.keras.layers.Dense(784)

    # 编码函数
    def encoder(self, x):
        h = tf.nn.relu(self.fc1(x))
        # get mean 均值
        mu = self.fc2(h)
        # get variance 方差
        log_var = self.fc3(h)

        return mu, log_var

    # 解码函数
    def decoder(self, z):
        out = tf.nn.relu(self.fc4(z))
        out = self.fc5(out)
        return out

    # 重新参数化
    @staticmethod
    def reparameterize(mu, log_var):
        # print(log_var.shape)
        eps = tf.random.normal(log_var.shape)
        std = tf.exp(log_var) ** 0.5
        z = mu + std * eps  # 均值 + 方差
        return z

    def call(self, inputs, training=None, mask=None):
        # [b, 784] ==> [b, z_dim] [b, z_dim]
        # 编码图片 均值与方差
        mu, log_var = self.encoder(inputs)

        # 重新参数化
        # reparameterization trick
        z = self.reparameterize(mu, log_var)

        # 解码图片
        # [b, 20] ==> [b, 784]
        x_hat = self.decoder(z)

        return x_hat, mu, log_var

# 模型搭建
model = VAE()
model.build(input_shape=(4, 784))
model.summary()

lr = 1e-3
optimizer = tf.keras.optimizers.Adam(lr=lr)

# 训练
for epoch in range(100):
    for step, x in enumerate(train_db):
        # [b, 28, 28] => [b, 784]
        x = tf.reshape(x, [-1, 784])

        # 梯度计算
        with tf.GradientTape() as tape:
            # 前向传播
            x_rec_logits, mu, log_var = model(x)

            # 损失函数计算
            rec_loss = tf.nn.sigmoid_cross_entropy_with_logits(labels=x, logits=x_rec_logits)
            rec_loss = tf.reduce_sum(rec_loss) / x.shape[0]

            # 相似度计算
            # compute kl divergence (mu, var) ~ N (0, 1)
            # https://stats.stackexchange.com/questions/7440/kl-divergence-between-two-univariate-gaussians
            kl_div = -0.5 * (log_var + 1 - mu ** 2 - tf.exp(log_var))
            kl_div = tf.reduce_sum(kl_div) / x.shape[0]

            # 损失函数 + kl_div
            loss = rec_loss + 1. * kl_div

        # 梯度计算与优化
        grads = tape.gradient(loss, model.trainable_variables)
        optimizer.apply_gradients(zip(grads, model.trainable_variables))

        if step % 100 == 0:
            print(epoch, step, 'kl div:', float(kl_div), 'rec loss:', float(rec_loss))

    # # evaluation  随机生成图片
    # z = tf.random.normal((batch_size, z_dim))
    # logits = model.decoder(z)
    # x_hat = tf.sigmoid(logits)
    # x_hat = tf.reshape(x_hat, [-1, 28, 28]).numpy() * 255.
    # x_hat = x_hat.astype(np.uint8)
    #
    # save_images(x_hat, 'vae_images/sampled_epoch%d.png' % epoch)

    # 由test图片反向生成
    x = next(iter(test_db))
    x = tf.reshape(x, [-1, 784])
    x_hat_logits, _, _ = model(x)
    x_hat = tf.sigmoid(x_hat_logits)
    x_hat = tf.reshape(x_hat, [-1, 28, 28]).numpy() * 255.
    x_hat = x_hat.astype(np.uint8)
    save_images(x_hat, 'vae_images/rec_epoch%d.png' % epoch)

