//
// Created by Lenovo on 2023/5/21.
//
/*
 *  map大小和交换
 *  函数原型
 *  size();     //返回容器中元素的数目
 *  empty();    //判断容器是否为空
 *  swap(sw);   //交换两个集合容器
 */
#include "iostream"
#include "map"
#include "algorithm"

using namespace std;

void test01() {
    //大小
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    if (m.empty()) {
        cout << "m为空" << endl;
    } else {
        cout << "m不为空" << endl;
        cout << "m的大小为:" << m.size() << endl;
    }
}

void test02() {
    map<int, int> m1;
    map<int, int> m2;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));

    m2.insert(pair<int, int>(4, 100));
    m2.insert(pair<int, int>(5, 200));
    m2.insert(pair<int, int>(6, 300));

    cout << "交换前:" << endl;
    auto F = [](const pair<int, int> &p) {
        cout << "key=" << p.first << " " << "val=" << p.second << endl;
    };
    for_each(m1.begin(), m1.end(), F);
    cout << endl;
    for_each(m2.begin(), m2.end(), F);

    m1.swap(m2);
    cout << "交换后" << endl;
    cout << endl;
    for_each(m1.begin(), m1.end(), F);
    cout << endl;
    for_each(m2.begin(), m2.end(), F);
}

int main() {
    test01();
    test02();
}