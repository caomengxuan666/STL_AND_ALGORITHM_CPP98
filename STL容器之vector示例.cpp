#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;                      
/// <summary>
/// vector存放自定义的数据类型
/// 
/// </summary>
/// <returns></returns>
class Person {
public:
	Person(string name,int age) :m_Age(age),m_Name(name){
	}
	string m_Name;
	int m_Age;
};
void myPrint(Person p) {
	cout << p.m_Age << endl;
	cout << p.m_Name << endl;
}

void test01() {
	vector <Person>v;
	Person p1("cmx", 19);
	Person p2("lwb", 18);
	v.push_back(p1);
	v.push_back(p2);

	vector<Person>::iterator itBegin = v.begin();
	vector<Person>::iterator itEnd = v.end();

	for_each(v.begin(), v.end(), myPrint);
}

//存放自定义数据类型，指针
void test02() {
	vector <Person*>v;

	Person p1("cmx", 19);
	Person p2("lwb", 18);
	v.push_back(&p1);
	v.push_back(&p2);
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名:" << (*it)->m_Name << "年龄:" << (*it)->m_Age << endl;
	}
}

int main() {
	test01();
	test02();
}