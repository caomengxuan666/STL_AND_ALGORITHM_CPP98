//
// Created by Lenovo on 2023/5/18.
//
/*
 * set��multiset����
 * set�����Բ����ظ����ݣ���multiset����
 * set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
 * multiset���������ݣ���˿��Բ����ظ�����
 */
#include "iostream"
#include "set"

using namespace std;

void test01() {
    set<int> s;
    pair<set<int>::iterator, bool> ret = s.insert(10);
    if (ret.second) {
        cout << "��һ�β���ɹ�" << endl;
    } else cout << "��һ�β���ʧ��" << endl;
    ret = s.insert(10);
    if (ret.second) {
        cout << "��һ�β���ɹ�" << endl;
    } else cout << "��һ�β���ʧ��" << endl;

    multiset<int> ms;
    //��������ظ�ֵ
    ms.insert(10);
    ms.insert(10);
    for (auto &it: ms) {
        cout << it << ' ';
    }
    cout<<endl;
}


int main() {
    test01();
}