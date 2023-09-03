//
// Created by Lenovo on 2023/5/7.
//vector容器预留空间
//功能：减少vector在动态扩展容量时的扩展次数
//
#include "iostream"
#include "vector"
using namespace std;

void test01(){
vector<int>v;

//可以利用reserve来预留空间
v.reserve(10000);
int num=0;
int *p=nullptr;

for(int i=0;i<10000;i++){//每次动态扩展一次，就会开辟一次，就会有一个新的首地址
    v.push_back(i);
    if(p!=&v[0]){
        p=&v[0];
        num++;
    }
}
cout<<"num="<<num<<endl;
}
int main(){
test01();
}