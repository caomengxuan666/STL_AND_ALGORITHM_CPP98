#include<iostream>
using namespace std;
/// <summary>
/// string字符串比较
/// 比较方式：
/// 字符串比较是按照字符串的ASCII码进行对比
/// =返回0
/// >返回1
/// <返回-1
/// 函数原型
/// int compare(const string&s)const; //与字符串s比较
/// int compare(const char*s)const;   //与字符串s比较
/// </summary>
void test01() {
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2)==0) {
		cout << "str1==str1" << endl;
	}
	else if (str1.compare(str2) > 0) {
		cout << "str1大于str2" << endl;
	}
	else {
		cout << "str1小于str2" << endl;
	}
}
int main() {
	test01();
}