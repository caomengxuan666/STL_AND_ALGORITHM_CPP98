//
// Created by Lenovo on 2023/5/25.
//
/*
 * adjacent_find
 * ���������ظ�Ԫ��
 * ����ԭ��
 * adjacent_find(iterator beg,iterator end)
 * ���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void test01() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(0);
    v.push_back(6);
    v.push_back(7);

    auto it = adjacent_find(v.begin(), v.end());
    if (it == v.end())cout << "δ�ҵ������ظ�Ԫ��" << endl;
    else cout << "�ҵ������ظ�Ԫ��" << *it << endl;
}

int main() {
    test01();
}