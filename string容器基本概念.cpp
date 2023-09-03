#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// string是C++风格的字符串，本质上是一个类
/// string 和char *区别
/// char*是一个指针
/// string是一个类，，内部封装了char*，管理这个字符串，是一个char*的容器
/// 特点： string类内部封装了很多成员方法
/// 例如find copy delete replace insert
/// string 管理char*所分配内存 不用担心复制越界和取值越界等，由类内部进行负责
/// string 构造函数
/// string()，创建一个空的字符串
/// string(const chat*s) 使用字符串s初始化
/// string(const string&str) //使用一个string对象初始化另一个string对象   
/// string(int n,char c)//使用n个字符c初始化
/// </summary>
void test01() {
	string s1;//默认构造

	const char* str = "hello world";
	string s2(str);
	cout << s2 << endl;

	string s3(s2);
	cout << s3 << endl;

	string s4(10, 'a');
	cout << s4 << endl;
}
int main() {
	test01();
}