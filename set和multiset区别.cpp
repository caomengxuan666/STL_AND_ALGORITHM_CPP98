//
// Created by Lenovo on 2023/5/18.
//
/*
 * set和multiset区别
 * set不可以插入重复数据，而multiset可以
 * set插入数据的同时会返回插入结果，表示插入是否成功
 * multiset不会监测数据，因此可以插入重复数据
 */
#include "iostream"
#include "set"

using namespace std;

void test01() {
    set<int> s;
    pair<set<int>::iterator, bool> ret = s.insert(10);
    if (ret.second) {
        cout << "第一次插入成功" << endl;
    } else cout << "第一次插入失败" << endl;
    ret = s.insert(10);
    if (ret.second) {
        cout << "第一次插入成功" << endl;
    } else cout << "第一次插入失败" << endl;

    multiset<int> ms;
    //允许插入重复值
    ms.insert(10);
    ms.insert(10);
    for (auto &it: ms) {
        cout << it << ' ';
    }
    cout<<endl;
}


int main() {
    test01();
}