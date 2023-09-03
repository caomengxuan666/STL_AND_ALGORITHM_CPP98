//
// Created by Lenovo on 2023/5/25.
//
/*
 * reverse
 * 功能描述
 * 将容器内元素进行反转
 * 函数原型
 * reverse(iterator beg,iterator end)
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v;
    v.push_back(60);
    v.push_back(10);
    v.push_back(20);
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);

    cout << "反转前" << endl;
    auto F = [](int val) { cout << "val= " << val << " "; };
    for_each(v.begin(), v.end(), F);

    reverse(v.begin(), v.end());
    cout << "反转后" << endl;
    for_each(v.begin(), v.end(), F);

}

int main() {
    test01();
}