//
// Created by Lenovo on 2023/5/18.
//
/*
 * set插入和删除
 * 函数原型
 * insert(elem) //在容器中插入元素
 * clear()  //删除所有元素
 * erase(pos)   //删除pos迭代器所指的元素，返回下一个元素的迭代器
 * erase(beg,end)   //删除区间(beg,end)的所有元素，返回下一个元素的迭代器
 * erase(elem)  //删除容器中指为elem的元素
 */
#include "iostream"
#include "set"
#include "algorithm"

using namespace std;

void test01() {
    set<int> s1;
    //插入
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    //遍历
    auto F = [](int val) {
        cout << "val=" << val << endl;
    };
    for_each(s1.begin(), s1.end(), F);

    //删除
    s1.erase(s1.begin());
    for_each(s1.begin(), s1.end(), F);

    //删除的重载版本
    s1.erase(10);
    for_each(s1.begin(), s1.end(), F);

    //清空
    s1.clear();
    for_each(s1.begin(),s1.end(),  F);
}

int main() {
    test01();
}