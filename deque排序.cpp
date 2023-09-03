//
// Created by Lenovo on 2023/5/7.
//
/*
 deque排序
 算法
 sort(iterator beg,iterator end) 对beg和end区间内元素进行排序
 */
#include "iostream"
#include "deque"
#include "algorithm"

using namespace std;

void myPrint(int val) {
    cout << val << endl;
}

void test01() {
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);

    for_each(d1.begin(), d1.end(), myPrint);
    cout << endl;

    //对于支持随机访问的迭代器的容器，都可以利用sort进行排序
    sort(d1.begin(), d1.end());//默认排序是从小到大的，升序

    for_each(d1.begin(), d1.end(), myPrint);
}

int main() {
    test01();
}