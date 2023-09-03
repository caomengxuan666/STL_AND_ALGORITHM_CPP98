//
// Created by Lenovo on 2023/5/22.
//
/*
 * map容器排序
 * map容器默认排序规则是按照key值从小到大进行排序
 * 利用仿函数，可以改变排序规则
 * 如果是自定义的数据类型的话，map必须要指定排序规则，同set容器
 */
#include "iostream"
#include "map"
#include "algorithm"

using namespace std;

class mySort {
public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;
    }
};

void test01() {
    map<int, int, mySort> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(4, 40));
    m.insert(make_pair(5, 50));

    auto F = [](const pair<int, int> &p) {
        cout << "key=" << p.first << " " << "val=" << p.second << endl;
    };
    for_each(m.begin(), m.end(), F);
}

int main() {
    test01();
}