//
// Created by Lenovo on 2023/5/23.
//
/*
 * 逻辑仿函数
 * template<class T>bool logical_and<T> //逻辑与
 * template<class T>bool logical_or<T>  //逻辑或
 * template<class T>bool logical_not<T> //逻辑非
 */
#include "iostream"
#include "functional"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<bool> v;
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(true);
    v.push_back(false);

    auto F = [](bool val) {
        cout << val << endl;
    };
    for_each(v.begin(),v.end(),F);
    cout<<endl;
    //利用逻辑非 将容器v搬运到容器v2中 并执行取反的操作
    vector<bool>v2;
    v2.resize(v.size());
    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
}

int main() {
    test01();
}