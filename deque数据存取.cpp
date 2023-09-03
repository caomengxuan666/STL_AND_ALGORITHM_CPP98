//
// Created by Lenovo on 2023/5/7.
//
/*
 deque数据存取
 函数原型
 at(int idx) 返回索引idx所指的元素
 operator[] 返回索引idx所指的元素
 front() 返回容器中第一个数据元素
 back() 返回容器中最后一个数据元素
 */
#include "iostream"
#include "deque"

using namespace std;

void test01() {
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);

    //通过[]来访问
    for (int i = 0; i < d1.size(); i++) {
        cout << d1[i] << " ";
    }
    cout << endl;

    //通过at来访问
    for (int i = 0; i < d1.size(); i++) {
        cout << d1.at(i) << " ";
    }
    cout << endl;

    //访问头尾元素
    cout << "第一个元素为" << d1.front() << endl;
    cout << "最后一个元素为" << d1.back() << endl;
}

int main() {
    test01();
}