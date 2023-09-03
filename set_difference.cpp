//
// Created by Lenovo on 2023/5/25.
//
/*
 *  set_difference
 *  ��������
 *  ����ԭ��
 *  set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
 *  �:��������a��˵������b���е����Լ�������û�еĽ���a��b�Ĳ
 *  ��֮��������b��˵������a���е����Լ�������û�еĽ���b��a�Ĳ
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> vTarget(max(v1.size(), v2.size()));//������������v2,v1û�н���
    auto itEnd=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), itEnd, [](int val) { cout << "val= " << val << " "; });
}

int main() {
    test01();
}