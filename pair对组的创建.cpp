//
// Created by Lenovo on 2023/5/21.
//
/*
 * pair对组创建
 * 功能描述：
 * 成对出现的数量，利用对组可以返回两个数据
 * 两种创建方式
 * pair<type,type>p(value1,value2);
 * pair<type,type>p=make_pair(value1,value2);
 */
#include "iostream"
#include "string"

using namespace std;

//pair对组的创建
void test01() {
//第一种方式
    pair<string, int> p1("cmx", 19);
    cout << "姓名:" << p1.first << "年龄:" << p1.second<<endl;

    //第二种方式
    pair<string,int>p2= make_pair("cyz",18);
    cout << "姓名:" << p2.first << "年龄:" << p2.second<<endl;
}

int main() {
    test01();
}