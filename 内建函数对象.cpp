//
// Created by Lenovo on 2023/5/23.
//
/*
 *  概念
 *  STL内键了一些函数对象
 *  分类
 *  算数仿函数
 *  关系仿函数
 *  逻辑仿函数
 *  用法
 *  这些仿函数所产生的对象，用法和一般函数完全相同
 *  使用内键函数对象，需要引入欧文件#include<functional>
 *  算术仿函数
 *  功能描述
 *  实现四则运算
 *  其中negate是一元运算，其他都是二元运算
 *  仿函数原型
 *  template<class T>T plus<T>  //加法仿函数
 *  template<class T> minus<T>  //减法仿函数
 *  template<class T>   multiplies<T>   //乘法仿函数
 *  template<class T>   divides<T>  //除法仿函数
 *  template<class T>   modules<T>  //取模仿函数
 *  template<class T>   negate<T>   //取反仿函数
 */
#include "iostream"
#include "functional"

using namespace std;

void test01() {
    negate<int> n;   //取反函数对象
    cout << n(50) << endl;
}

void test02() {
    plus<int> p;
    cout << p(10, 20) << endl;
}

int main() {
    test01();
    test02();
}