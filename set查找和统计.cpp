//
// Created by Lenovo on 2023/5/18.
//
/*
 * ��set�������в��������Լ�ͳ������
 * ����ԭ��
 * find(key)    //����key�Ƿ���ڣ������ڣ����ظü�Ԫ�صĵ��������������ڣ�����set.end()
 * count(key)   //ͳ��key��Ԫ�ظ���
 */
#include "iostream"
#include "set"

using namespace std;

void test01() {
//����
    set<int> s1;
//��������
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);

    //����
    auto pos = s1.find(30);
    if (pos != s1.end()) {
        cout << "�ҵ�Ԫ��" << *pos << endl;
    } else cout << "δ�ҵ�Ԫ��" << endl;
}

void test02() {
//����
    set<int> s1;
//��������
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
//ͳ��30�ĸ���
    int num = s1.count(30);
    //����set���ԣ�ͳ�ƽ����Ҫô��0��Ҫô��1
    cout<<"num="<<num<<endl;
}

int main() {
    test01();
    test02();
}