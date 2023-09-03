#include<iostream>
#include<vector>
using namespace std;
/// <summary>
/// vector的插入和删除
/// 对vector容器进行插入、删除操作
/// push_back(ele); //尾部插入元素ele
/// pop_back(); //删除最后一个元素
/// insert(const_iterator,pos ,ele); //迭代器指向位置pos插入元素ele
/// insert(const_iterator,pos,int count,ele); //迭代器指向位置pos插入count个元素ele
/// erase(const_iterator pos); //删除迭代器指向的元素
/// erase(const_iterator start,const_iterator end); //删除迭代器从start到end之间的元素
/// clear(); //删除容器中所有元素
/// </summary>
/// <returns></returns>
void printVec(vector<int>&v) {
	for (auto it : v) {
		cout << it << endl;
	}
}
void test01() {
	vector<int>v1;
	
	//尾插法
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//遍历
	printVec(v1);

	//尾删法
	v1.pop_back();
	printVec(v1);

	//插入 第一个参数是迭代器
	v1.insert(v1.begin(),100);
	printVec(v1);

	v1.insert(v1.begin(), 2, 1000);//插入两个1000
	printVec(v1);

	//删除 参数也是迭代器
	v1.erase(v1.begin());
	printVec(v1);

	v1.erase(v1.begin(), v1.end());
	printVec(v1);

	v1.clear();
	printVec(v1);
}
int main() {
	test01();
}