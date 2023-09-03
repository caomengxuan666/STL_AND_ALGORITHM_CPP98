//
// Created by Lenovo on 2023/5/16.
//
/*
 * list大小操作
 * 函数原型：
 * size()   //返回容器中元素的个数
 * empty()  //判断容器是否为空
 * resize(num)  //重新指定容器长度为num，若容器变长，则以默认值填充新位置
 *              //如果容器变短，则末尾超出容器长度的被删除
 * resize(num,elem) //重新指定容器的长度为num,若容器变长，则以elem填充新位置
 *                  //若容器变段，则末尾超出容器长度的被删除
 */
#include "iostream"
#include "list"
#include "algorithm"

using namespace std;

void test01() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    auto F = [](int val) { cout << "val=" << val << endl; };
    for_each(l1.begin(), l1.end(), F);

    //判断容器是否为空
    if (l1.empty()) {
        cout << "l1为空" << endl;
    } else {
        cout << "l1不为空" << endl;
    }
    //重新指定大小
    l1.resize(10, 10000);
    for_each(l1.begin(), l1.end(), F);
    l1.resize(2);
    for_each(l1.begin(), l1.end(), F);

}

int main() {
    test01();
}