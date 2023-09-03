//
// Created by Lenovo on 2023/5/7.
//
/*
 deque��С����
 ����ԭ��
 deque.empty()  �ж������Ƿ�Ϊ��
 deque.size()  ����������Ԫ�صĸ���
 deque,resize(num) ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
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
        cout<<"d1Ϊ��"<<endl;
    }
    else {
        cout<<"d1��Ϊ��"<<endl;
        cout<<"d1�Ĵ�СΪ��"<<d1.size()<<endl;
        //deque����û����������
    }
    d1.resize(15,1);
    printDeque(d1);
}
int main(){
    test01();
}