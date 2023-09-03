//
// Created by Lenovo on 2023/5/18.
//
/*
 * set��С�ͽ���
 * ����ԭ��
 * size()   //����������Ԫ�ص���Ŀ
 * empty()  //�ж������Ƿ�Ϊ��
 * swap()   //����������������
 */
#include "iostream"
#include "set"
#include "algorithm"

using namespace std;

void test01() {
    set<int> s1;
//��������
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
//��ӡ����
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(s1.begin(), s1.end(), F);

    //�ж��Ƿ�Ϊ��
    if (s1.empty())cout << "s1Ϊ��" << endl;
    else {
        cout << "s1��Ϊ��" << endl;
        cout << "s1�Ĵ�СΪ" << s1.size() << endl;
    }
    set<int> s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);
    cout << "����ǰ" << endl;
    for_each(s1.begin(), s1.end(), F);
    for_each(s2.begin(), s2.end(), F);
    s1.swap(s2);
    cout << "������" << endl;
    for_each(s1.begin(), s1.end(), F);
    for_each(s2.begin(), s2.end(), F);

}

int main() {
    test01();
}