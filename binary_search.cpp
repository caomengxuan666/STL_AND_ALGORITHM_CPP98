//
// Created by Lenovo on 2023/5/25.
//
/*
 * binary_search
 * ��������:
 * ����ָ��Ԫ���Ƿ����
 * ����ԭ��
 * bool binary_search(iterator beg,iterator end��value)
 * ����ָ����Ԫ�أ����ҵ�����true,����false
 * ע��:�����������в�����
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
//��������
//ע�⣬������������������У�������������У����δ֪
    bool flag = binary_search(v.begin(), v.end(), 9);
    if (flag)cout << "�ҵ���Ԫ��" << endl;
    else cout << "δ�ҵ�" << endl;
}

int main() {
    test01();
}