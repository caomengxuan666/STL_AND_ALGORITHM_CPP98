//
// Created by Lenovo on 2023/5/25.
//
/*
 * count
 * 功能描述:统计元素个数
 * count(iterator beg,iterator end,value)
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

//统计内置数据类型
void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    size_t num = count(v.begin(), v.end(), 40);
    cout << "40的元素个数是" << num << endl;
}

class Person {
public:
    Person(string name, int age) : m_Name(name), m_Age(age) {}

    bool operator==(const Person &p) {
        if (this->m_Age == p.m_Age)
            return true;
        else return false;
    }

    string m_Name;
    int m_Age;
};

//统计自定义数据类型,需要重载==
void test02() {
    Person p1("cmx", 19);
    Person p2("lwb", 18);
    Person p3("hhw", 18);
    Person p4("cyz", 19);
    Person p5("cr", 18);

    Person p("cyx", 19);

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    size_t num = count(v.begin(), v.end(), p);
    cout << num << endl;


}

int main() {
    //test01();
    test02();
}