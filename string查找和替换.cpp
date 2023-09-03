#include<iostream>
using namespace std;
/// <summary>
/// string查找和替换
/// 查找：查找指定字符串是否存在
/// 替换：在指定位置替换字符串
/// 函数原型
/// int find(const string&str,int pos=0)const; //查找str第一次出现位置，从pos开始查找
/// int find(const char*s,int pos=0)const; //查找s第一次出现位置，从pos开始查找
/// int find(const char*s,int pos,int n)const; //从pos位置查找s的前n个字符串第一次位置
/// int find(const char c,int pos=0)const; //查找字符c第一次出现位置
/// int rfind(const string&str,int pos=npos)const //查找str最后一次位置，从pos开始查找
/// int rfind(const char*s,int pos=npos)const //查找s最后一次出现位置，从pos开始查找
/// int rfind(const char*s int pos,int n)const //从pos查找s的前n个字符最后一次位置
/// int rfind(const char c,int pos=0)const //查找字符c最后一次出现位置
/// string& replace(int pos,int n,const string&str) //替换从pos开始n个字符为字符串str
/// string& replace(int pos,int n,const char*s) //替换从pos开始的n个字符为字符串s
/// </summary>
/// <returns></returns>
/// 1.查找
void test01() {
	string str1 = "abcdefg";

	int pos1=str1.find("de");
	if (pos1 == -1) {
		cout << "未找到字符串" << endl;
	}
	else cout <<"pos1=" << pos1 << endl;
	//rfind和find区别
	//rfind就是right find,从右往左查找 find是从左往右
	pos1 = str1.rfind("de");
	cout << "pos1=" << pos1 << endl;
}
void test02() {
	string str1 = "abcdefg";
	str1.replace(0,6,"cmx666");//即使填入的字符串超出范围长度，也可以全部成功替换，如三个字符串的范围填入四个1，字符串会被填入四个1
	cout << str1 << endl;
}
int main() {
	test01();
	test02();
}