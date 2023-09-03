//
// Created by Lenovo on 2023/5/16.
//
/*
 * list赋值和交换
 * 函数原型：
 * assign(beg,end)  //将(beg,end)区间的数据拷贝赋值给本身
 * assign(n,elem)   //将n个elem拷贝赋值给本身
 * list& operator=(const list&lst)  //重载等号操作符
 * swap(lst)    //将list与本身的元素互换
 */
#include "iostream"
#include "list"
#include "algorithm"


using namespace std;

void test01() {
    //默认构造
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    for_each(l1.begin(), l1.end(), [](int val) { cout << "val=" << val << endl; });
    //重载等号
    auto F = [](int val) { cout << "val=" << val << endl; };
    list<int> l2;
    l2 = l1;
    for_each(l2.begin(), l2.end(), F);
    list<int> l3;
    l3.assign(l2.begin(), l2.end());
    for_each(l3.begin(), l3.end(), F);
    l1.swap(l2);
    for_each(l1.begin(),l1.end(),F);
    for_each(l2.end(),l2.begin(),F);
}

int main() {
    test01();
}