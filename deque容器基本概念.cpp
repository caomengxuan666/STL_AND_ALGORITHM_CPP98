//
// Created by Lenovo on 2023/5/7.
//
/*
 deque容器基本概念
 功能：双端数组，可以对头端进行插入删除操作
 deque与vector区别
 vector对于头部的插入删除效率低，数据量越大，效率越低
 deque相对而言，对头部的插入删除速度比vector快
 vector访问元素的速度会比deque快，这和两者内部实现有关
 deque内部工作原理
 deque内部有个中控器，维护每段缓冲区内的内容缓冲区中存放真实数据
 中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
 deque容器的迭代器也是支持随机访问的

 deque构造函数
 函数原型
 deque<T>deqT //默认构造形式
 deque(beg,end) //构造函数将(beg,end)区间中的元素拷贝给本身
 deque(n,elem) //构造函数将n个elem拷贝给本身
 deque(const deque &deq) //拷贝构造函数
 */
#include "iostream"
#include "deque"
#include "algorithm"
using namespace std;
void myPrint(int val) {
    cout << val << endl;
}
void test01(){
    deque<int>d1;
    for(int i=0;i<10;i++){
        d1.push_back(i);
    }
    for_each(d1.begin(),d1.end(),myPrint);
}
int main(){
test01();
}
