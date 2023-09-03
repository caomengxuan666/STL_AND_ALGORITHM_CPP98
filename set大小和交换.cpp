//
// Created by Lenovo on 2023/5/18.
//
/*
 * set大小和交换
 * 函数原型
 * size()   //返回容器中元素的数目
 * empty()  //判断容器是否为空
 * swap()   //交换两个集合容器
 */
#include "iostream"
#include "set"
#include "algorithm"

using namespace std;

void test01() {
    set<int> s1;
//插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
//打印容器
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(s1.begin(), s1.end(), F);

    //判断是否为空
    if (s1.empty())cout << "s1为空" << endl;
    else {
        cout << "s1不为空" << endl;
        cout << "s1的大小为" << s1.size() << endl;
    }
    set<int> s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);
    cout << "交换前" << endl;
    for_each(s1.begin(), s1.end(), F);
    for_each(s2.begin(), s2.end(), F);
    s1.swap(s2);
    cout << "交换后" << endl;
    for_each(s1.begin(), s1.end(), F);
    for_each(s2.begin(), s2.end(), F);

}

int main() {
    test01();
}