//
// Created by Lenovo on 2023/5/16.
//
/*
 * list数据存取
 * front()  //返回第一个元素
 * back()   //返回最后一个元素
 */
#include "iostream"
#include "list"

using namespace std;

void test01() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    cout << "第一个元素为:" << l1.front() << endl;
    cout << "第二个元素为" << l1.back() << endl;
    auto it = l1.begin();
    it++;//支持双向，但这里++是重组了，而不能写成it=it+1
    //it++ 在list中这种写法是错误的，不支持随机访问
}

int main() {
    test01();
}