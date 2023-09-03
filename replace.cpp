//
// Created by Lenovo on 2023/5/25.
//
/*
 * replace
 * 功能描述
 * 将容器内指定范围的旧元素修改为新元素
 * 函数原型replace(iterator beg,iterator end,old value,new value)
 */
#include "algorithm"
#include "iostream"
#include "vector"

using namespace std;

void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);
    auto F = [](int val) {
        cout << "val= " << val << " ";
    };
    cout << "替换前" << endl;
    for_each(v.begin(), v.end(), F);

    replace(v.begin(), v.end(), 20, 2000);

    cout << "替换后" << endl;
    for_each(v.begin(), v.end(), F);


}

int main() {
    test01();
}
