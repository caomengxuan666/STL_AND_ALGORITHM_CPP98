#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// string赋值操作
/// 等号方法
/// string& operator=(const char*s) char*类型字符串赋值给当前的字符串
/// string& operator=(const string &s) 把字符串s赋给当前的字符串
/// string& operator=(char c) 字符赋值给当前的字符串
/// 成员函数assign方法
/// string& assign(const char *s) 把字符串s赋给当前的字符串
/// string& assign(const char*s,int n) 把字符串s的前n个字符赋值给当前字符串
/// string& assign(const string&s,int n) 从字符串s的第n个字符开始赋值给当前的字符串
/// string& assign(const string&s) 把字符串s赋给当前字符串
/// string& assign(int n,char c) 用n个字符c赋给当前字符串
/// </summary>
void test01() {
	string str1;
	str1 = "hello world";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	string str3;
	str3.assign(str2);
	cout << str3 << endl;

	string str4;
	str4.assign("hello cpp");
	cout << str4 << endl;

	string str5;
	str5.assign("hello cpp", 5);
	cout << str5 << endl;//这里是将前5个元素赋值给str5

	string str6;
	str6.assign(6, '6');
	cout << str6 << endl;

	string str7;
	str7.assign(str4, 5);//黑马程序员教学有误，这里是从第5个元素开始将str4的值赋值给str7
	cout << str7<< endl;

}
int main() {
	test01();
}
