#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// string子串
/// 从字符串中获取想要的子串
/// 函数原型
/// string substr(int pos=0,int n=npos)const //返回由pos开始的n个字符串组成的字符串
/// </summary>
/// <returns></returns>
void test01() {
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}
//实用操作
void test02() {
	string email = "caomengxuan666@gmail.com";

	//从邮件的地址中获取用户名信息
	int address=email.rfind("@");
	string userName = email.substr(0, address);
	cout << "userName=" << userName << endl;
}
int main() {
	//test01();
	test02();
}