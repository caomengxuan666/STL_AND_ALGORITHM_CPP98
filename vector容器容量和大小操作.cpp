#include<iostream>
#include<vector>
using namespace std;
/// <summary>
/// vector容量和大小
/// 对vector容器的容量大小和操作
/// empty() //判断容器是否为空
/// capacity() //容器的容量
/// size() //返回容器中元素的个数
/// resize(int num) //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
///                 如果容器变短，则末尾超出容器长度的元素被删除
/// resize(int num,elems) //重新指定容器的长度为num，若容器变长，则以elem值填充新位置，
///                       //如果容器变短，则末尾超出容器长度的元素被删除
/// </summary>
/// <returns></returns>
void printVec(vector<int>& v) {
	for (auto it : v) {
		cout << it << " ";
	}
	cout << endl;
}
void test01() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVec(v1);

	if (v1.empty()) {//为真 代表容器为空
		cout << "v1为空" << endl;
	}
	else {
		cout << "v1不为空" << endl;
		cout << "v1的容量为:" << v1.capacity() << endl;
		cout << "v1的大小为:" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15);//重新指定比原来长，默认用0填充新的位置，也可以换一个数
	v1.resize(16, 100);//利用重载版本可以指定默认的填充值
	printVec(v1);

	v1.resize(10);//重新指定比原来短，超出长度的部分会被删除
	printVec(v1);
}
int main() {
	test01();
}