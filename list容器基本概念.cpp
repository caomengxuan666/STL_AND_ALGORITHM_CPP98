//
// Created by Lenovo on 2023/5/15.
//
/*
 * list容器基本概念
 * 功能：将数据进行链式存储
 * 链表由一系列结点组成
 * 结点的由一个存储数据元素的数据域和一个存储下一个节点地址的指针域组成
 * STL中的链表是一个双向循环链表
 * 优点：可以对任意位置进行快速插入和删除元素，通过修改指针即可
 * 缺点：容器遍历速度没有数组快，占用的空间比数组大
 * 由于链表中存储方式不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器
 * list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的
 *
 * list构造函数
 * list<T>lst;  //list采用模板类实现对象的默认构造形式
 * list(beg,end)    //构造函数将(beg,end)区间中的元素拷贝给本身
 * list(n,elem) //构造函数将n个elem拷贝给本身
 * list(const list &lst)    //拷贝构造函数
 */
#include "iostream"
#include "list"

using namespace std;


template<typename T>
void printList(const list<T> &lst) {
    for (auto it: lst) {
        cout << it << endl;
    }
}

void test01() {
    //创建list容器，默认构造
    list<int> l1;
    //添加数据
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);

    //区间方式构造
    list<int>l2(l1.begin(),l1.end());
    printList(l2);

    //拷贝方式构造
    const list<int>&l3(l2);
    printList(l3);

    //n个元素方式构造
    list<int>l4(4,666);
    printList(l4);
}

int main() {
    test01();
}