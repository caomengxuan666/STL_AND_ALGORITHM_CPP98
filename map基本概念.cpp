//
// Created by Lenovo on 2023/5/21.
//
/*
 * map基本概念
 * map中所有元素都是pair
 * pair中第一个元素为key，即键值，起索引作用，第二个元素为value，即实值
 * 所有元素都会根据元素的key值自动排序
 * 本质：map/multimap属于关联式容器，底层结构是用二叉树实现
 * 优点：可以根据key值快速找到value值
 * map和multimap区别
 * map中不允许容器中有重复key值元素
 * multimap允许容器中有重复key值元素
 *
 * map构造和赋值
 * 构造
 * map<T1,T2>mp     //map默认构造函数
 * map(const map&mp)    //拷贝构造函数
 * 赋值
 * map& operator(const map &mp) //重载等号操作符
 */
#include "iostream"
#include "map"
#include "algorithm"

using namespace std;

void test01() {
    //创建map容器
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));//匿名对组
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));
    auto F = [](const pair<int, int> &p) {
        cout << "key=" << p.first <<" "<< "val=" << p.second << endl;
    };
    for_each(m.begin(), m.end(), F);

    //拷贝构造
    map<int,int>m1(m);
    for_each(m1.begin(), m1.end(), F);

    //赋值
    map<int,int>m2;
    m2=m1;
    for_each(m2.begin(), m2.end(), F);
}

int main() {
    test01();
}