//
// Created by Lenovo on 2023/5/21.
//
/*
 * pair���鴴��
 * ����������
 * �ɶԳ��ֵ����������ö�����Է�����������
 * ���ִ�����ʽ
 * pair<type,type>p(value1,value2);
 * pair<type,type>p=make_pair(value1,value2);
 */
#include "iostream"
#include "string"

using namespace std;

//pair����Ĵ���
void test01() {
//��һ�ַ�ʽ
    pair<string, int> p1("cmx", 19);
    cout << "����:" << p1.first << "����:" << p1.second<<endl;

    //�ڶ��ַ�ʽ
    pair<string,int>p2= make_pair("cyz",18);
    cout << "����:" << p2.first << "����:" << p2.second<<endl;
}

int main() {
    test01();
}