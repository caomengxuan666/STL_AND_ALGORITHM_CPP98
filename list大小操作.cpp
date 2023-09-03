//
// Created by Lenovo on 2023/5/16.
//
/*
 * list��С����
 * ����ԭ�ͣ�
 * size()   //����������Ԫ�صĸ���
 * empty()  //�ж������Ƿ�Ϊ��
 * resize(num)  //����ָ����������Ϊnum���������䳤������Ĭ��ֵ�����λ��
 *              //���������̣���ĩβ�����������ȵı�ɾ��
 * resize(num,elem) //����ָ�������ĳ���Ϊnum,�������䳤������elem�����λ��
 *                  //��������Σ���ĩβ�����������ȵı�ɾ��
 */
#include "iostream"
#include "list"
#include "algorithm"

using namespace std;

void test01() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(l1.begin(), l1.end(), F);

    //�ж������Ƿ�Ϊ��
    if (l1.empty()) {
        cout << "l1Ϊ��" << endl;
    } else {
        cout << "l1��Ϊ��" << endl;
    }
    //����ָ����С
    l1.resize(10, 10000);
    for_each(l1.begin(), l1.end(), F);
    l1.resize(2);
    for_each(l1.begin(), l1.end(), F);

}

int main() {
    test01();
}