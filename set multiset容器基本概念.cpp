//
// Created by Lenovo on 2023/5/18.
//
/*
 * set基本概念
 * 所有元素都会在插入时自动排序
 * set/multiset属于关联式容器，底层结构使用二叉树实现、
 * set和multiset区别
 * set不允许容器中有重复的元素
 * multiset允许容器中有重复的元素
 *
 * set构造和赋值
 * set<T>st;    //默认构造
 * set(const set&st)    //拷贝构造函数
 * set& operator=(const set &s) //重载等号操作符
 */
#include "iostream"
#include "set"
#include "algorithm"

using namespace std;

void test01() {
    set<int> s1;
    //插入数据的时候只有insert的方式
    s1.insert(10);
    s1.insert(50);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //遍历容器
    //set容器特点，所有元素插入的时候会自动排序
    //set容器不允许插入重复的值
    auto F = [](int val) { cout << "val="<<val << endl; };
    for_each(s1.begin(),s1.end(),F);

    //拷贝构造
    set<int>s2(s1);
    for_each(s2.begin(),s2.end(),F);

    //赋值
    const auto& s3=s2;
    for_each(s3.begin(),s3.end(),F);

}

int main() {
    test01();
}