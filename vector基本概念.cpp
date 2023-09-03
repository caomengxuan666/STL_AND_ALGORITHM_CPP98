#include<iostream>
#include<vector>
using namespace std;
/// <summary>
/// vector容器
/// 基本概念：vector数据结构和数组非常相似，也称为单端数组
/// vector和普通数组区别
/// 不同之处在于数组是静态空间，而vector可以动态扩展
/// 动态扩展：
/// 并不是在原空间之后续新空间，而是找更大的内存空间，然后将原数组拷贝新空间，释放原空间
/// vector前端基本上是封闭的，通常是在尾部插入数据
/// vector容器的迭代器是支持随机访问的迭代器，跳跃式访问
/// vector的构造容器
/// 函数原型
/// vector<T>v; //采用模板实现类实现，默认构造函数
/// vector(v.begin(),v.end());  //将v.begin(),end()区间中的元素拷贝给本身
/// vector(n,elem); //构造函数将n个elem拷贝给本身
/// vector(const vector &vec) //拷贝构造函数
/// </summary>
/// <returns></returns>
void printVector(vector<int>v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {//这里的vector<type>::iterator 可以用auto关键字代替
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	vector<int>v1; //默认无参构造
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//通过区间的方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n个elem方式构造
	vector<int>v3(10, 100);
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}
int main() {
	test01();
}