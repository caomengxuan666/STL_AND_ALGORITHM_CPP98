//
// Created by Lenovo on 2023/5/16.
//
/*
 * 排序案例
 * 案例描述：将Person自定义数据类型进行排序，Person中属性有姓名，年龄，月薪
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
    return p1.m_Age > p2.m_Age;//降序
}

bool sortBySalary(Person &p1, Person &p2) {
    return p1.m_salary > p2.m_salary;//降序
}


void test01() {
    //创建容器
    list<Person> l;
    //准备数据
    Person p1("cmx", 19, 35000);
    Person p2("cyz", 18, 20000);
    Person p3("hhw", 19, 5000);
    Person p4("lwb", 18, 3000);
    //插入数据
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);

    for (auto &it: l) {
        cout << "姓名" << it.m_Name << "年龄" << it.m_Age << "月薪" << it.m_salary << endl;
    }
    cout << endl;
    //排序(以年龄为键值)
    l.sort(sortByAge);
    for (auto &it: l) {
        cout << "姓名" << it.m_Name << "年龄" << it.m_Age << "月薪" << it.m_salary << endl;
    }
    cout << endl;
    //排序(以月薪为键值)
    l.sort(sortBySalary);
    for (auto &it: l) {
        cout << "姓名" << it.m_Name << "年龄" << it.m_Age << "月薪" << it.m_salary << endl;
    }
}

int main() {
    test01();
}