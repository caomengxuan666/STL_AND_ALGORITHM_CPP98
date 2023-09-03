//
// Created by Lenovo on 2023/5/16.
//
/*
 * list��ת������
 * ����ԭ�ͣ�
 * reserve()    //��ת����
 * sort()   //��������
 */
#include "iostream"
#include "list"
#include "algorithm"

using namespace std;

void test01() {
    list<int> l1;
    for (int i = 0; i <= 100; i += 10) {
        l1.push_back(i);
    }
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(l1.begin(), l1.end(), F);
    l1.reverse();
    for_each(l1.begin(), l1.end(), F);
    l1.sort();
    for_each(l1.begin(), l1.end(), F);
}

bool myCompare(int v1, int v2) {//ͨ���º���ʵ�ֽ�������
//�����õ�һ�������ڵڶ�����
    return v1 > v2;
}

//����
void test02() {
    list<int> l1;
    for (int i = 0; i <= 100; i += 10) {
        l1.push_back(i);
    }
    auto F = [](int val) { cout << "val=" << val << endl; };
    //����ǰ
    cout << "����ǰ" << endl;
    for_each(l1.begin(), l1.end(), F);

    //�����

    //���в�֧��������ʵ���������������������ʹ�ñ�׼�㷨��
    //��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
    //sort(l1.begin(), l1.end());   //�����
    l1.sort();
    cout << "�����" << endl;
    for_each(l1.begin(), l1.end(), F);

    l1.sort(myCompare);//ͨ���º���ʵ�ֽ�������
    for_each(l1.begin(), l1.end(), F);

}

int main() {
    //test01();
    test02();
}