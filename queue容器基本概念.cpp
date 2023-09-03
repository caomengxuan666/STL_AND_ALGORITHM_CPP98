//
// Created by Lenovo on 2023/5/15.
//
#include <utility>

#include "iostream"
#include "queue"
#include "string"
/*
 * queue��������
 * ���queue��һ���Ƚ��ȳ�FIRST IN FIRST OUT�����ݽṹ��������������
 * ��һ��Ԫ�ؽж�ͷfront�����һ��Ԫ�ؽж�βback
 * ��ͷֻ�ܳ����ݣ���βֻ�ܽ����ݣ�����������push����ȥ�г���pop
 *
 * queue���ýӿ�
 * ���캯��
 * queue<T>que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
 * queue(const queue &que)  //�������캯��
 * queue&operator=(const queue&que)  //���صȺŲ�����
 * ���ݴ�ȡ
 * push(elem)   //����β���Ԫ��
 * pop()    //�Ӷ�ͷ�Ƴ�һ��Ԫ��
 * back()   //�������һ��Ԫ��
 * front()  //���ص�һ��Ԫ��
 * ��С����
 * empty()  //�ж϶����Ƿ�Ϊ��
 * size()   //���ض��еĴ�С
 */
using namespace std;

class Person {
public:
    Person(string name, int age) : m_Name(std::move(name)), m_Age(age) {}

    string m_Name;
    int m_Age;
};

void test01() {
    //��������
    queue<Person> q;

    //׼������
    Person p1("cmx", 19);
    Person p2("lwb", 18);
    Person p3("hhw", 18);
    Person p4("cyz", 18);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    //�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
    while (!q.empty()) {
        //�鿴��ͷ
        cout << "��ͷԪ��--������" << q.front().m_Name << "���䣺" << q.front().m_Age << endl;
        //�鿴��β
        cout << "��βԪ��--������" << q.back().m_Name << "���䣺" << q.back().m_Age << endl;
        //����
        q.pop();
    }
    cout << "���д�СΪ" << q.size() << endl;
}

int main() {
    test01();
}