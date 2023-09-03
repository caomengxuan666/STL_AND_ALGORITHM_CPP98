//
// Created by Lenovo on 2023/5/16.
//
/*
 * list反转和排序
 * 函数原型：
 * reserve()    //反转链表
 * sort()   //链表排序
 */
#include "iostream"
#include "list"
#include "algorithm"

using namespace std;

void test01() {
    list<int> l1;
    for (int i = 0; i <= 100; i += 10) {
        l1.push_back(i);
    }
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(l1.begin(), l1.end(), F);
    l1.reverse();
    for_each(l1.begin(), l1.end(), F);
    l1.sort();
    for_each(l1.begin(), l1.end(), F);
}

bool myCompare(int v1, int v2) {//通过仿函数实现降序排列
//降序，让第一个数大于第二个数
    return v1 > v2;
}

//排序
void test02() {
    list<int> l1;
    for (int i = 0; i <= 100; i += 10) {
        l1.push_back(i);
    }
    auto F = [](int val) { cout << "val=" << val << endl; };
    //排序前
    cout << "排序前" << endl;
    for_each(l1.begin(), l1.end(), F);

    //排序后

    //所有不支持随机访问迭代器的容器，，不可以使用标准算法！
    //不支持随机访问迭代器的容器，内部会提供对应一些算法
    //sort(l1.begin(), l1.end());   //错误的
    l1.sort();
    cout << "排序后" << endl;
    for_each(l1.begin(), l1.end(), F);

    l1.sort(myCompare);//通过仿函数实现降序排列
    for_each(l1.begin(), l1.end(), F);

}

int main() {
    //test01();
    test02();
}