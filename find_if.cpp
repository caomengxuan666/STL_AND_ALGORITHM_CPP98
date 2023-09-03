//
// Created by Lenovo on 2023/5/24.
//
/*
 * find_if
 * 功能描述：按照条件查找元素
 * find_if(iterator beg,iterator end,_Pred);
 * //按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

//常用查找算法 find_if
//1.查找内置数据类型
class GreaterThanFive {
public:
    bool operator()(int val) {
        return val > 5;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++)v.push_back(i);
    auto it = find_if(v.begin(), v.end(), GreaterThanFive());
    if (it == v.end())cout << "没有找到" << endl;
    else cout << "找到大于5的数字为:" << *it << endl;
}

class Person {
public:
    Person(string name, int age) : m_Name(name), m_Age(age) {}

    string m_Name;
    int m_Age;
};

class GreaterThan20 {
public:
    bool operator()(const Person &p) const {
        return p.m_Age > 30;
    }
};

void test02() {
    vector<Person> v;

//创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    //找到年龄大于20的人
    auto it = find_if(v.begin(), v.end(), GreaterThan20());
    if (it == v.end())cout << "没有找到" << endl;
    else cout << "找到" << "姓名" << it->m_Name << "年龄:" << it->m_Age << endl;
}

int main() {
    test01();
    test02();
}