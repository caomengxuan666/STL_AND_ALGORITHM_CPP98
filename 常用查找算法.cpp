//
// Created by Lenovo on 2023/5/24.
//
/*
 * 常用查找算法
 * find     //查找元素
 * find_if  //按照条件查找元素
 * adjacent_find    //查找相邻重复元素
 * binary_search    //二分查找法
 * count    //统计元素个数
 * count_if //按条件统计元素个数
 *
 * find
 * 功能描述
 * 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
 * 函数原型
 * find(iterator beg,iterator end,value)
 * //按值开始查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
 */
#include "iostream"
#include "algorithm"
#include "vector"
#include "string"

using namespace std;

//查找内置数据类型
void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    //查找容器中是否有5这个元素
    auto it = find(v.begin(), v.end(), 5);
    if (it == v.end())cout << "没有找到" << endl;
    else cout << "找到了" << *it << endl;
}

class Person {
public:
    Person(string name, int age) : m_Name(name), m_Age(age) {}

    //重载==让底层find知道如何对比Person的数据类型
    bool operator==(const Person &p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)return true;
        return false;
    }

    string m_Name;
    int m_Age;
};

void test02() {
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    auto it = find(v.begin(), v.end(), p2);
    if (it == v.end()) {
        cout << "没有找到" << endl;
    } else {
        cout << "找到元素" << "姓名:" << it->m_Name << "年龄:" << it->m_Age << endl;
    }
}

int main() {
    test01();
    test02();
}