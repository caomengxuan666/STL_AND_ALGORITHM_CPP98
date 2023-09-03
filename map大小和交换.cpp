//
// Created by Lenovo on 2023/5/21.
//
/*
 *  map��С�ͽ���
 *  ����ԭ��
 *  size();     //����������Ԫ�ص���Ŀ
 *  empty();    //�ж������Ƿ�Ϊ��
 *  swap(sw);   //����������������
 */
#include "iostream"
#include "map"
#include "algorithm"

using namespace std;

void test01() {
    //��С
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    if (m.empty()) {
        cout << "mΪ��" << endl;
    } else {
        cout << "m��Ϊ��" << endl;
        cout << "m�Ĵ�СΪ:" << m.size() << endl;
    }
}

void test02() {
    map<int, int> m1;
    map<int, int> m2;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));

    m2.insert(pair<int, int>(4, 100));
    m2.insert(pair<int, int>(5, 200));
    m2.insert(pair<int, int>(6, 300));

    cout << "����ǰ:" << endl;
    auto F = [](const pair<int, int> &p) {
        cout << "key=" << p.first << " " << "val=" << p.second << endl;
    };
    for_each(m1.begin(), m1.end(), F);
    cout << endl;
    for_each(m2.begin(), m2.end(), F);

    m1.swap(m2);
    cout << "������" << endl;
    cout << endl;
    for_each(m1.begin(), m1.end(), F);
    cout << endl;
    for_each(m2.begin(), m2.end(), F);
}

int main() {
    test01();
    test02();
}