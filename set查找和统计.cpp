//
// Created by Lenovo on 2023/5/18.
//
/*
 * 对set容器进行查找数据以及统计数据
 * 函数原型
 * find(key)    //查找key是否存在，若存在，返回该键元素的迭代器，若不存在，返回set.end()
 * count(key)   //统计key的元素个数
 */
#include "iostream"
#include "set"

using namespace std;

void test01() {
//查找
    set<int> s1;
//插入数据
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);

    //查找
    auto pos = s1.find(30);
    if (pos != s1.end()) {
        cout << "找到元素" << *pos << endl;
    } else cout << "未找到元素" << endl;
}

void test02() {
//查找
    set<int> s1;
//插入数据
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
//统计30的个数
    int num = s1.count(30);
    //对于set而言，统计结果，要么是0，要么是1
    cout<<"num="<<num<<endl;
}

int main() {
    test01();
    test02();
}