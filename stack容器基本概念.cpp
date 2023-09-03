//
// Created by Lenovo on 2023/5/15.
//
/*
 * stack������������
 * ���stack��һ���Ƚ����first in last out�����ݽṹ����ֻ��һ������
 * ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
 * ջ�����ж������Ƿ�Ϊ�գ����Է���Ԫ�ظ���
 *
 * stack���ýӿ�
 * ���캯��
 * stack<T>stk  //stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
 * stack<const stack &stk)  //�������캯��
 * ��ֵ����
 * stack&operator=(const stack&stk) //���صȺŲ�����
 * ���ݴ�ȡ
 * push(elem)   //��ջ�����Ԫ��
 * pop()    //ɾ��ջ���ĵ�һ��Ԫ��
 * top()    //����ջ��Ԫ��
 * ��С����
 * empty()  //�ж϶�ջ�Ƿ�Ϊ��
 * size()   //����ջ�Ĵ�С
 *
 *
 */
#include "iostream"
#include "stack"

using namespace std;

void test01() {
    stack<int> s;

    //��ջ
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "ջ�Ĵ�С:" << s.size() << endl;
    //ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
    while (!s.empty()) {
        //�鿴ջ��Ԫ��
        cout << s.top() << endl;
        //��ջ
        s.pop();
    }
    cout << "ջ�Ĵ�С:" << s.size() << endl;
}

int main() {
    test01();
}