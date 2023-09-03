//
// Created by Lenovo on 2023/5/21.
//
/*
 *set容器排序
 * set容器默认排序规则为从小到大
 * 主要技术点：
 * 利用仿函数可以改变排序规则
 */
#include "iostream"
#include "set"
#include "algorithm"


using namespace std;

class MyCompare {//仿函数本质上是类，但是功能上却是方法
public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;//让前面的数大于后面的数,就是降序
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

    //指定排序规则为从大到小
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
        //按照年龄降序
        return p1.m_Age>p2.m_Age;
    }
};

//set存放自定义数据类型
void test02() {
    //自定义的数据类型 都会制定排序规则
    set<Person,comparePerson>s;
//创建Person对象
    Person p1("cmx", 19);
    Person p2("lwb", 18);
    Person p3("cyz", 17);
    Person p4("hhw", 15);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    auto F=[](const Person&p){
        cout<<"姓名:"<<p.m_Name<<"年龄:"<<p.m_Age<<endl;
    };
    for_each(s.begin(),s.end(),F);
}

int main() {
   // test01();
    test02();
}