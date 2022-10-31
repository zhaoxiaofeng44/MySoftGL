#coding=utf-8
import tensorflow as tf  
# NumPy is often used to load, manipulate and preprocess data.  
import numpy as np  
# node1 = tf.constant(3.0,tf.float32)  
# node2 = tf.constant(4.0)  
# print(node1,node2)  
sess=tf.Session()  
# print(sess.run([node1,node2]))  
# node3=tf.add(node1,node2)  
#print("node3:",node3)  
#print("sess.run(node3):",sess.run(node3))  
# 构造计算图  
# a=tf.placeholder(tf.float32)  
# b=tf.placeholder(tf.float32)  
# adder_node=a+b  
#运行计算图  
#print("adder_node:",adder_node)  
#print(sess.run(adder_node,{a:3,b:4.5}))  
#print(sess.run(adder_node,{a:[1,3],b:[2,4]}))  
# add_and_triple=adder_node * 3  
#print("add_and_triple:",add_and_triple)  
#print("sess run result:",sess.run(add_and_triple,{a:3,b:4.5}))  
  
W=tf.Variable([.3],tf.float32)  
b=tf.Variable([-.3],tf.float32)  
x=tf.placeholder(tf.float32)  
linear_model=W*x+b  
init = tf.global_variables_initializer()  
sess.run(init)  
print("linear_model:",linear_model)  
print(sess.run(linear_model,{x:[1,2,3,4]}))  
  
y=tf.placeholder(tf.float32)  
squared_deltas=tf.square(linear_model-y)  
loss=tf.reduce_sum(squared_deltas)  
print("loss:",loss)  
print(sess.run(loss,{x:[1,2,3,4],y:[0,-1,-2,-3]}))  

# fixW=tf.assign(W,[-.1])  
# fixb=tf.assign(b,[.1])  
# sess.run([fixW,fixb])  
#print("fix loss:",sess.run(loss,{x:[1,2,3,4],y:[0,-1,-2,-3]}))  

optimizer=tf.train.GradientDescentOptimizer(0.01)  
train=optimizer.minimize(loss)  
print("train:\n",train)  
sess.run(init)#重置变量到初始化值  
for i in range(1000):  
    sess.run(train,{x:[1,2,3,4],y:[2,4,6,8]})  

print(sess.run(linear_model,{x:[6,34]}))  
#curr_W, curr_b, curr_loss  = sess.run([W, b, loss],{x:[1,2,3,4],y:[0,-1,-2,-3]})  
#print("W: %s b: %s loss: %s"%(curr_W, curr_b, curr_loss))  