//
// Created by Lenovo on 2023/5/7.
//
/*
 deque����
 �㷨
 sort(iterator beg,iterator end) ��beg��end������Ԫ�ؽ�������
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

    //����֧��������ʵĵ�����������������������sort��������
    sort(d1.begin(), d1.end());//Ĭ�������Ǵ�С����ģ�����

    for_each(d1.begin(), d1.end(), myPrint);
}

int main() {
    test01();
}