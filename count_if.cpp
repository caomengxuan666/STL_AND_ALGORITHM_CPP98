//
// Created by Lenovo on 2023/5/25.
//
/*
 * count_if
 * 功能描述:按条件统计元素个数
 * 函数原型
 * count_if(iterator beg,iterator end,_Pred)
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

class GreaterThan20 {
public:
    bool operator()(int val) {
        return val > 20;
    }
};

//统计内置数据类型
void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(30);
    size_t num = count_if(v.begin(), v.end(), GreaterThan20());

    cout << "在容器中大于20的元素的个数为" << num;
}

class Person {
public:
    Person(string name, int age) : m_Name(name), m_Age(age) {}

    bool operator ==(const Person &p) const {
        if (this->m_Age == p.m_Age)
            return true;
        else return false;
    }

    string m_Name;
    int m_Age;
};

class AgeMoreThan18{
public:
    bool operator()(const Person&p){
        return p.m_Age>18;
    }
};
void test02() {
    vector<Person> v;
    Person p1("cmx", 19);
    Person p2("lwb", 18);
    Person p3("hhw", 18);
    Person p4("cyz", 19);
    Person p5("cr", 18);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

   size_t num=count_if(v.begin(), v.end(),AgeMoreThan18());
   cout<<num<<endl;
}

int main() {
    test01();
    test02();
}