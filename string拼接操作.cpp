#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// string operator+=(const char* str)  重载+=操作符
/// string operator+=(const char c)     重载+=操作符
/// string operator+=(const string& str) 重载+=操作符
/// string append(const char*s)  把字符串s连接到当前字符串结尾
/// string append(const char*s,int n) 把字符串s的前n个字符连接到当前字符串结尾
/// string append(const string &s) 同operator+=(const string& str)
/// string append(const string &s,int pos,int n) 字符串s中从pos开始的n个字符连接到字符串结尾
/// 如果有三个参数，后面两个参数分别是截取的起始位置和末尾位置
/// </summary>
/// <returns></returns>
void test01() {
	string str1 = "我";
	str1 += "爱c++";
	cout << "str1=" << str1 << endl;

	str1 += ':';
	cout << "str1=" << str1 << endl;

	string str2 = " QT CLION";
	str1 += str2;
	cout << "str1=" << str1 << endl;
	
	string str3 = "I";
	str3.append(" love");
	cout << "str3=" << str3 << endl;

	str3.append(" cppabcde", 4);
	cout << "str3=" << str3 << endl;

	str3.append(str2,0,3);//从第0到第3个位置截取
	cout << "str3=" << str3 << endl;
}
int main() {
	test01();
}