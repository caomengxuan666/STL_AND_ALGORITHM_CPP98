#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/// <summary>
/// STL基本概念
/// Standard Template Library
/// 广义上分为 容器 算法 迭代器
/// 容器和算法之间通过迭代器进行无缝连接
/// STL几乎所有的代码都用了模板类或者是模板函数
/// STL六大组件
/// 容器 算法 迭代器 仿函数 适配器(配接器) 空间配置器
/// 容器 各种数据结构 如vector list deque set map
/// 算法 各种常用的算法 如sort find copy for_each
/// 迭代器 扮演了容器与算法之间的胶合剂
/// 仿函数 行为类似函数 可以作为算法的某种策略
/// 适配器 一种用来修饰容器或者仿函数或者迭代器接口的东西
/// 空间配置器 负责空间的配置与管理
/// </summary>
/// 容器
/// STL容器就是将运用最广泛的数据结构实现出来
/// 如数组 链表 图 栈 队列 集合 映射表等
/// 这些容器分为序列式容器和关联式容器两种
/// 序列式容器：强调值的排序，，序列式容器中的每个元素均有固定的位置
/// 关联式容器：二叉树结构，各元素之间没有严格物理上的顺序关系
/// 算法
/// 通过有限的步骤，解决逻辑或者是数学上的问题
/// 算法分为质变算法和非质变算法
/// 质变算法：是指运算过程中会更改区间内元素的内容，比如拷贝，替换，删除等等
/// 非质变算法：是指运算过程中不会更改区间内的元素内容，比如说查找，计数，排序，寻找极值等等
/// 迭代器
/// 提供一种方法，使之能够依序寻访某个容器中所含的元素，而又无需暴露该容器内部的表示方式
/// 每个容器都有自己专属的迭代器
/// 迭代器使用非常类似于指针
/// 迭代器种类
/// 输入迭代器 对数据只读访问 支持++ == ! =
/// 输出迭代器 对数据只写访问 支持++
/// 前向迭代器 读写操作，并能向前推进迭代器 支持++ == ! =
/// 双向迭代器 读写操作，并能向前和向后操作 支持++ --
/// 随机访问迭代器 读写操作，可以以跳跃的方式访问任意数据，功能最强 支持++ -- [n] -n < <= > >=
/// 常用的容器中迭代器种类为双向迭代器和随机访问迭代器
/// vector存放内置数据类型
/// 容器:vector
/// 算法for_each
/// 迭代器vector<int>::iterator
void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	//创建了一个vector容器，数组
	vector<int>v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
	vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置

	//第一种遍历方式 while
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;//向后偏移
	}
	
	//第二种遍历方式 for
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	//第三种遍历方式 利用STL中提供的遍历算法for_each
	for_each(v.begin(),v.end(),myPrint);//利用了回调的技术，在遍历期间调用函数
}
int main() {
	test01();
}
