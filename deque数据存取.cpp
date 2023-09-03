//
// Created by Lenovo on 2023/5/7.
//
/*
 deque���ݴ�ȡ
 ����ԭ��
 at(int idx) ��������idx��ָ��Ԫ��
 operator[] ��������idx��ָ��Ԫ��
 front() ���������е�һ������Ԫ��
 back() �������������һ������Ԫ��
 */
#include "iostream"
#include "deque"

using namespace std;

void test01() {
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);

    //ͨ��[]������
    for (int i = 0; i < d1.size(); i++) {
        cout << d1[i] << " ";
    }
    cout << endl;

    //ͨ��at������
    for (int i = 0; i < d1.size(); i++) {
        cout << d1.at(i) << " ";
    }
    cout << endl;

    //����ͷβԪ��
    cout << "��һ��Ԫ��Ϊ" << d1.front() << endl;
    cout << "���һ��Ԫ��Ϊ" << d1.back() << endl;
}

int main() {
    test01();
}