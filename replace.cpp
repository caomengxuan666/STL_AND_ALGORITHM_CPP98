//
// Created by Lenovo on 2023/5/25.
//
/*
 * replace
 * ��������
 * ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
 * ����ԭ��replace(iterator beg,iterator end,old value,new value)
 */
#include "algorithm"
#include "iostream"
#include "vector"

using namespace std;

void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);
    auto F = [](int val) {
        cout << "val= " << val << " ";
    };
    cout << "�滻ǰ" << endl;
    for_each(v.begin(), v.end(), F);

    replace(v.begin(), v.end(), 20, 2000);

    cout << "�滻��" << endl;
    for_each(v.begin(), v.end(), F);


}

int main() {
    test01();
}
