//
// Created by Lenovo on 2023/5/15.
//
#include <utility>

#include "iostream"
#include "queue"
#include "string"
/*
 * queue基本概念
 * 概念：queue是一种先进先出FIRST IN FIRST OUT的数据结构，它有两个出口
 * 第一个元素叫队头front，最后一个元素叫队尾back
 * 队头只能出数据，队尾只能进数据，进入叫做入队push，出去叫出队pop
 *
 * queue常用接口
 * 构造函数
 * queue<T>que; //queue采用模板类实现，queue对象的默认构造形式
 * queue(const queue &que)  //拷贝构造函数
 * queue&operator=(const queue&que)  //重载等号操作符
 * 数据存取
 * push(elem)   //往队尾添加元素
 * pop()    //从队头移除一个元素
 * back()   //返回最后一个元素
 * front()  //返回第一个元素
 * 大小操作
 * empty()  //判断队列是否为空
 * size()   //返回队列的大小
 */
using namespace std;

class Person {
public:
    Person(string name, int age) : m_Name(std::move(name)), m_Age(age) {}

    string m_Name;
    int m_Age;
};

void test01() {
    //创建队列
    queue<Person> q;

    //准备数据
    Person p1("cmx", 19);
    Person p2("lwb", 18);
    Person p3("hhw", 18);
    Person p4("cyz", 18);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    //判断只要队列不为空，查看队头，查看队尾，出队
    while (!q.empty()) {
        //查看队头
        cout << "队头元素--姓名：" << q.front().m_Name << "年龄：" << q.front().m_Age << endl;
        //查看队尾
        cout << "队尾元素--姓名：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;
        //出队
        q.pop();
    }
    cout << "队列大小为" << q.size() << endl;
}

int main() {
    test01();
}