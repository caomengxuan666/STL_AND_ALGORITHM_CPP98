//
// Created by Lenovo on 2023/5/15.
//
/*
 * list������������
 * ���ܣ������ݽ�����ʽ�洢
 * ������һϵ�н�����
 * ������һ���洢����Ԫ�ص��������һ���洢��һ���ڵ��ַ��ָ�������
 * STL�е�������һ��˫��ѭ������
 * �ŵ㣺���Զ�����λ�ý��п��ٲ����ɾ��Ԫ�أ�ͨ���޸�ָ�뼴��
 * ȱ�㣺���������ٶ�û������죬ռ�õĿռ�������
 * ���������д洢��ʽ�����������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
 * list��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ�������
 *
 * list���캯��
 * list<T>lst;  //list����ģ����ʵ�ֶ����Ĭ�Ϲ�����ʽ
 * list(beg,end)    //���캯����(beg,end)�����е�Ԫ�ؿ���������
 * list(n,elem) //���캯����n��elem����������
 * list(const list &lst)    //�������캯��
 */
#include "iostream"
#include "list"

using namespace std;


template<typename T>
void printList(const list<T> &lst) {
    for (auto it: lst) {
        cout << it << endl;
    }
}

void test01() {
    //����list������Ĭ�Ϲ���
    list<int> l1;
    //�������
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);

    //���䷽ʽ����
    list<int>l2(l1.begin(),l1.end());
    printList(l2);

    //������ʽ����
    const list<int>&l3(l2);
    printList(l3);

    //n��Ԫ�ط�ʽ����
    list<int>l4(4,666);
    printList(l4);
}

int main() {
    test01();
}