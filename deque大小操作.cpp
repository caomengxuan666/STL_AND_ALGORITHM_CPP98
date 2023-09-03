//
// Created by Lenovo on 2023/5/7.
//
/*
 deque大小操作
 函数原型
 deque.empty()  判断容器是否为空
 deque.size()  返回容器中元素的个数
 deque,resize(num) 重新指定容器的长度为num，若容器变长，则以默认值填充新位置，如果容器变短，则末尾超出容器长度的元素被删除
 */
#include "iostream"
#include "deque"
using namespace std;
void printDeque(const deque<int>&d){
    for(auto it:d){
        cout<<it<<endl;
    }
}
void test01(){
    deque<int>d1;
    for(int i=0;i<10;i++){
        d1.push_back(i);
    }
    printDeque(d1);

    if(d1.empty()){
        cout<<"d1为空"<<endl;
    }
    else {
        cout<<"d1不为空"<<endl;
        cout<<"d1的大小为："<<d1.size()<<endl;
        //deque容器没有容量概念
    }
    d1.resize(15,1);
    printDeque(d1);
}
int main(){
    test01();
}