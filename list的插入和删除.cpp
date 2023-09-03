//
// Created by Lenovo on 2023/5/16.
//
/*
 * list插入和删除
 * 函数原型：
 * push_back(elem)  //在容器尾部加入一个元素
 * pop_back()   //删除容器中最后一个元素
 * push_from(elem)  //在容器开头插入一个元素
 * pop_front()  //从容器开头移除第一个元素
 * insert(pos,elem) //在pos位置插入elem元素值的拷贝，返回新数据的位置
 * insert(pos,beg,end)  //在pos位置插入[beg,end]区间的数据，无返回值
 * clear(); //移除容器的所有数据
 * erase(beg,end)   //删除[beg,end]区间的数据，返回下一个数据的位置
 * erase(pos)   //删除pos位置的数据，返回下一个数据的位置
 * remove(elem) //删除容器中所有与elem值匹配的元素
 */
#include "iostream"
#include "list"
#include "algorithm"

using namespace std;

void test01() {
    list<int> l1;
//尾插
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);

//头插
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(l1.begin(), l1.end(), F);
//尾删
    l1.pop_back();
    for_each(l1.begin(), l1.end(), F);
    //头删
    l1.pop_front();
    for_each(l1.begin(), l1.end(), F);
    //insert插入
    l1.insert(l1.begin(), 1000);
    for_each(l1.begin(), l1.end(), F);

    //删除
    auto it = l1.begin();
    l1.erase(it);
    for_each(l1.begin(), l1.end(), F);

    //移除
    l1.push_back(10000);
    for_each(l1.begin(), l1.end(), F);
    l1.remove(10000);
    for_each(l1.begin(), l1.end(), F);
}

int main() {
    test01();
}