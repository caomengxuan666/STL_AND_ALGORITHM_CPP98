//
// Created by Lenovo on 2023/5/25.
//
/*
 * 常用算术生成算法
 * 注意:算法生成算法属于小型算法，需要包含头文件<numeric>
 * accumulate   //计算容器元素之和
 * fill     //向容器内添加元素
 *
 * accumulate
 * 功能描述:
 * 计算区间内容器元素累计总和
 *  函数原型
 *  accumulate(iterator beg,iterator end,value)     //计算容器内元素累计总和
 *  value是起始的累加值
 */
#include "iostream"
#include "vector"
#include "algorithm"
#include "numeric"

using namespace std;

void test01() {
    vector<int> v;
    for (int i = 0; i <= 100; i++) {
        v.push_back(i);
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "sum= " << sum << endl;
}

int main() {
    test01();
}