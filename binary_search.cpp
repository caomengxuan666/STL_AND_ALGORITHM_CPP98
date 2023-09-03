//
// Created by Lenovo on 2023/5/25.
//
/*
 * binary_search
 * 功能描述:
 * 查找指定元素是否存在
 * 函数原型
 * bool binary_search(iterator beg,iterator end，value)
 * 查找指定的元素，查找到返回true,否则false
 * 注意:在无序序列中不可用
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
//查找容器
//注意，容器必须是有序的序列，如果是无序序列，结果未知
    bool flag = binary_search(v.begin(), v.end(), 9);
    if (flag)cout << "找到了元素" << endl;
    else cout << "未找到" << endl;
}

int main() {
    test01();
}