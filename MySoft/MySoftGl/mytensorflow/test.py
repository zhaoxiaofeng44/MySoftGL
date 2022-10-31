import tensorflow as tf
import os

os.environ['TF_CPP_MIN_LOG_LEVEL']='2'

tf.app.flags.DEFINE_integer("max_step", 200, "训练模型的步数")          # 训练步数
tf.app.flags.DEFINE_string("model_path",
                           "./ckpt/linearregression",
                           "模型保存的路径+模型名字")                    # 定义模型的路径
FLAGS = tf.app.flags.FLAGS                                           # 定义获取命令行参数


def linear_regression():
    with tf.variable_scope("dataset"):                               # 设置变量的命名空间
        X = tf.random_normal(shape=(100,1), mean=0.5, stddev=1)
        Y_true = tf.matmul(X, [[4.0]]) + 3.0
    # 建立线性模型
    with tf.variable_scope("linear_model"):
        weights = tf.Variable(initial_value=tf.random_normal(shape=(1,1)), name="weights")
        bias = tf.Variable(initial_value=tf.random_normal(shape=(1,1)), name="bias")
        Y_predict = tf.matmul(X, weights) + bias
    with tf.variable_scope("loss"):
        loss = tf.reduce_mean(tf.square(Y_predict-Y_true), name="loss")
    with tf.variable_scope("gradient_optimiter"):
        optimizer = tf.train.GradientDescentOptimizer(learning_rate=0.01).minimize(loss)
    # 收集变量
    tf.summary.scalar("loss",loss)
    tf.summary.histogram("weight",weights)
    tf.summary.histogram("bias",bias)
    # 合并变量
    merge = tf.summary.merge_all()
    # 初始化所有变量
    init = tf.global_variables_initializer()

    # 创建一个模型 保存与加载 实例saver
    saver = tf.train.Saver()
    with tf.Session() as sess:
        sess.run(init)  # 给变量赋值初始值
        print("初始化的权重为%f，偏置为%f" % (weights.eval(), bias.eval()))
        # 模型加载
        # saver.restore(sess, "./ckpt/linearregression")
        print("权重为%f，偏置为%f" % (weights.eval(), bias.eval()))
        # 创建事件文件，用于Tensorboard展示训练模型的全过程
        file_writer = tf.summary.FileWriter(logdir="./summary/",graph=sess.graph)
        # 训练模型
        for i in range(FLAGS.max_step):
            sess.run(optimizer)
            print("第%d步的损失为%f，权重为%f， 偏置为%f" % (i+1, loss.eval(), weights.eval(), bias.eval()))
            # 将收集并合并的变量添加到事件文件，以便在Tensorboard上展示
            summary = sess.run(merge)
            file_writer.add_summary(summary,i+1)
        # 模型保存
        saver.save(sess, FLAGS.model_path)

    return None


def main(argv):
    print("这是main函数")
    print(argv)
    print(FLAGS.model_path)
    linear_regression()

if __name__ == "__main__":
    tf.app.run()                  # 通过tf.app.run()启动main(argv)函数
