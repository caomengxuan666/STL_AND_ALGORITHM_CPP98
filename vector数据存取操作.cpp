#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
/// <summary>
/// vector数据存取
/// 函数原型
/// at(int idx); //返回索引idx所指的数据
/// opearator[]; //返回索引idx所指的数据
/// front(); //返回容器中的第一个数据元素
/// back(); //返回容器中最后一个元素
/// </summary>
/// <returns></returns>
void myprint(int val) {
	cout << val << endl;
}
void test01() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	//利用[]方式访问数组中的元素
	for_each(v1.begin(), v1.end(), myprint);

	//利用at方式访问数组中的元素
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << endl;
	}
	cout << endl;
	
	//获取第一个元素
	cout << "第一个元素为" << v1.front() << endl;

	//获取最后一个元素
	cout << "最后一个元素为" << v1.back() << endl;
}

int main() {
	test01();
}
