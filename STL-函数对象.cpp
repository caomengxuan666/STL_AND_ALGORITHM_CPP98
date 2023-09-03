//
// Created by Lenovo on 2023/5/22.
//
/*
 * 函数对象概念
 * 重载函数操作符的类，其对象称为函数对象
 * 函数对象使用重载的()时，行为类似函数调用，也叫仿函数
 * 本质：函数对象(仿函数)是一个类，不是一个函数
 *
 * 函数对象使用
 * 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
 * 函数对象超出普通函数的概念，函数对象可以有自己的状态
 * 函数对象可以作为参数传递
 */
#include "iostream"

using namespace std;

class myAdd {
public:
    myAdd() : count(0) {}

    int operator()(int val1, int val2) {
        count++;
        return val1 + val2;
    }

    int count;
};

class myPrint {
public:
    void operator()(const string &test) {
        cout << test << endl;
    }
};

void test01() {
    myAdd a;//函数对象
    cout << a(10, 10) << endl;
    cout << "myPrint调用的次数为" << a.count << endl;
}

void test02() {
    myPrint a;
    a("hello world");
}

void doPrint(myPrint &mp, string test) {
    mp(test);
}

void test03() {
    myPrint a;
    doPrint(a, "cmx");
}

int main() {
    test01();
    test02();
    test03();
}