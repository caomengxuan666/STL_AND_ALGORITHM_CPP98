//
// Created by Lenovo on 2023/5/21.
//
/*
 *set��������
 * set����Ĭ���������Ϊ��С����
 * ��Ҫ�����㣺
 * ���÷º������Ըı��������
 */
#include "iostream"
#include "set"
#include "algorithm"


using namespace std;

class MyCompare {//�º������������࣬���ǹ�����ȴ�Ƿ���
public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;//��ǰ��������ں������,���ǽ���
    }
};

void test01() {
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(50);
    s1.insert(40);
    s1.insert(30);
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(s1.begin(), s1.end(), F);
    cout << endl;

    //ָ���������Ϊ�Ӵ�С
    set<int, MyCompare> s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(50);
    s2.insert(40);
    s2.insert(30);

    for_each(s2.begin(), s2.end(), F);
}

class Person {
public:
    Person(string name, int age) : m_Name(name), m_Age(age) {}

    string m_Name;
    int m_Age;
};

class comparePerson{
public:
    bool operator()(const Person&p1,const Person&p2)const{
        //�������併��
        return p1.m_Age>p2.m_Age;
    }
};

//set����Զ�����������
void test02() {
    //�Զ������������ �����ƶ��������
    set<Person,comparePerson>s;
//����Person����
    Person p1("cmx", 19);
    Person p2("lwb", 18);
    Person p3("cyz", 17);
    Person p4("hhw", 15);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    auto F=[](const Person&p){
        cout<<"����:"<<p.m_Name<<"����:"<<p.m_Age<<endl;
    };
    for_each(s.begin(),s.end(),F);
}

int main() {
   // test01();
    test02();
}