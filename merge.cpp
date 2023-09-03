//
// Created by Lenovo on 2023/5/25.
//
/*
 * merge
 * 功能描述:
 * 将两个容器合并，存储到另一个容器中
 * 函数原型
 * merge(iterator beg1,iterator end1，iterator beg2,iterator end2,iterator dest)
 * //dest 目标容器的开始迭代器
 * 注意，两个合并容器必须是有序的
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 1);
    }
    //目标容器
    vector<int> Target;
    //提前给目标容器分配空间
    Target.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), Target.begin());
    for_each(Target.begin(), Target.end(), [](int val) { cout << val << endl; });
    cout << endl;
}

int main() {
    test01();
}