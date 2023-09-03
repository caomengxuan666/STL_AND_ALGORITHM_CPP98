//
// Created by Lenovo on 2023/5/16.
//
/*
 * ������
 * ������������Person�Զ����������ͽ�������Person�����������������䣬��н
 */
#include <utility>

#include "iostream"
#include "list"


using namespace std;

class Person {
public:
    Person(string name, int age, double salary) : m_Name(std::move(name)), m_Age(age), m_salary(salary) {}

    string m_Name;
    int m_Age;
    double m_salary;
};

bool sortByAge(Person &p1, Person &p2) {
    return p1.m_Age > p2.m_Age;//����
}

bool sortBySalary(Person &p1, Person &p2) {
    return p1.m_salary > p2.m_salary;//����
}


void test01() {
    //��������
    list<Person> l;
    //׼������
    Person p1("cmx", 19, 35000);
    Person p2("cyz", 18, 20000);
    Person p3("hhw", 19, 5000);
    Person p4("lwb", 18, 3000);
    //��������
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);

    for (auto &it: l) {
        cout << "����" << it.m_Name << "����" << it.m_Age << "��н" << it.m_salary << endl;
    }
    cout << endl;
    //����(������Ϊ��ֵ)
    l.sort(sortByAge);
    for (auto &it: l) {
        cout << "����" << it.m_Name << "����" << it.m_Age << "��н" << it.m_salary << endl;
    }
    cout << endl;
    //����(����нΪ��ֵ)
    l.sort(sortBySalary);
    for (auto &it: l) {
        cout << "����" << it.m_Name << "����" << it.m_Age << "��н" << it.m_salary << endl;
    }
}

int main() {
    test01();
}