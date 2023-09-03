#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// string中单个字符获取的方式有两种
/// char& operator[](int n) //通过[]方式获取字符
/// char& at(int n) //通过at方法获取字符
/// </summary>
void test01() {
	string str = "hello";
	cout << "str=" << str << endl;
	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++) {
		cout << str.at(i) << " ";
	}
	cout << endl;
	//3.修改单个字符
	str[0] = 'x';
	cout <<"str=" << str <<endl;
	str[1] = 'x';
	cout << "str=" << str << endl;
}
int main() {
	test01();
}