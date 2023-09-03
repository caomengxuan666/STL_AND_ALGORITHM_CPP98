//
// Created by Lenovo on 2023/5/23.
//
/*
 *  函数原型
 *  template<class T>bool equal_to<T>   //等于
 *  template<class T>bool not_equal_to<T>   //不等于
 *  template<class T>bool greater<T>    //大于
 *  template<class T>bool greater_equal<T>  //大于等于
 *  template<class T>bool less<T>   //小于
 *  template<class T>bool less_equal<T> //小于等于
 */
#include "iostream"
#include "functional"
#include "vector"
#include "algorithm"

using namespace std;

void test01() {
    vector<int> v;
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);
    auto F = [](int val) {
        cout << val << " ";
    };
    for_each(v.begin(), v.end(), F);
    cout<<endl;
    //降序
    sort(v.begin(),v.end(),greater<>());//编译器提供的函数对象
    for_each(v.begin(), v.end(), F);
}

int main() {
    test01();
}