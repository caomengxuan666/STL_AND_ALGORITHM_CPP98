//
// Created by Lenovo on 2023/5/25.
//
/*
 * adjacent_find
 * 查找相邻重复元素
 * 函数原型
 * adjacent_find(iterator beg,iterator end)
 * 查找相邻重复元素，返回相邻元素的第一个位置的迭代器
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void test01() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(0);
    v.push_back(6);
    v.push_back(7);

    auto it = adjacent_find(v.begin(), v.end());
    if (it == v.end())cout << "未找到相邻重复元素" << endl;
    else cout << "找到相邻重复元素" << *it << endl;
}

int main() {
    test01();
}