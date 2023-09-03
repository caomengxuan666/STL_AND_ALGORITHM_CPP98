//
// Created by Lenovo on 2023/5/25.
//
/*
 *  fill
 *  功能描述:向容器内填充指定的元素
 *  函数原型
 *  fill(iterator beg,iterator end,value)
 *  value为填充的值
 */
#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

void test01() {
    vector<int> v;
    v.resize(10);

    //后期重新填充
    fill(v.begin(), v.end(), 100);
    auto F = [](int val) {
        cout << "val= " << val << endl;
    };
    for_each(v.begin(), v.end(), F);
}

int main() {
    test01();
}