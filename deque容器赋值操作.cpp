//
// Created by Lenovo on 2023/5/7.
//
/*
 deque赋值操作
 函数原型
 deque& operator=(const deque&deq) //重载等号操作符
 assign(beg,end) //将(beg,end)区间中的数据拷贝赋值给本身
 assign(n,elem) //将n个elem拷贝赋值给本身
 */
#include "iostream"
#include "deque"

using namespace std;

void myPrint(deque<int> &d) {
    for (auto i: d) {
        cout << i << endl;
    }
}

void test01() {
    deque<int> d1;
    for (int i = 0; i < 10; i++) {
        d1.push_back(i);
    }
    myPrint(d1);
    //1.重载==
    deque<int> d2;
    d2 = d1;
    myPrint(d2);
    //2.assign赋值
    deque<int>d3;
    d3.assign(d1.begin(),d2.end());
    myPrint(d3);

    //利用n个elem初始化
    deque<int>d4;
    d4.assign(10,100);
    myPrint(d4);
}

int main() {
    test01();
}