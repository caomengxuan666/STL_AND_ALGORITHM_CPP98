#include<iostream>
#include<vector>
using namespace std;
/// <summary>
/// vector互换容器
/// 实现两个容器内元素进行互换
/// 函数原型
/// swap(vec)//将vec与本身的元素互换
/// 实际用途
/// 巧用swap可以收缩内存空间
/// </summary>
void printVec(vector<int>& v) {
	for (auto it : v) {
		cout << it << endl;
	}
}
void test01() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	cout << "交换前:" << endl;
	printVec(v1);
	
	vector<int>v2;
	for (int i = 10; i >0; i--) {
		v2.push_back(i);
	}
	cout << "交换前:" << endl;
	printVec(v1);

	cout << "交换后:" << endl;
	v1.swap(v2);
	printVec(v1);
	printVec(v2);
	
}
void test02() {
	vector<int>v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;
	
	v.resize(3);
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);//匿名vector容器拷贝构造和与自身交换
	//vector<int>(v)是匿名对象，按照v的所有元素个数来初始化匿名对象的数据大小
	//.swap(v)，前面一整个是一个匿名对象，加上这个就相当于做了容器之间的交换，把匿名对象和v做了一个互换
	//而匿名对象有一个特点，当前行执行完毕之后，匿名对象会马上被回收，所以匿名对象的内存会马上被释放
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;
}
int main() {
	//test01();
	test02();
}
