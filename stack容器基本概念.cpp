//
// Created by Lenovo on 2023/5/15.
//
/*
 * stack容器基本概念
 * 概念：stack是一种先进后出first in last out的数据结构，它只有一个出口
 * 栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为
 * 栈可以判断容器是否为空，可以返回元素个数
 *
 * stack常用接口
 * 构造函数
 * stack<T>stk  //stack采用模板类实现，stack对象的默认构造形式
 * stack<const stack &stk)  //拷贝构造函数
 * 赋值操作
 * stack&operator=(const stack&stk) //重载等号操作符
 * 数据存取
 * push(elem)   //向栈顶添加元素
 * pop()    //删除栈顶的第一个元素
 * top()    //返回栈顶元素
 * 大小操作
 * empty()  //判断堆栈是否为空
 * size()   //返回栈的大小
 *
 *
 */
#include "iostream"
#include "stack"

using namespace std;

void test01() {
    stack<int> s;

    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "栈的大小:" << s.size() << endl;
    //只要栈不为空，查看栈顶，并且执行出栈操作
    while (!s.empty()) {
        //查看栈顶元素
        cout << s.top() << endl;
        //出栈
        s.pop();
    }
    cout << "栈的大小:" << s.size() << endl;
}

int main() {
    test01();
}