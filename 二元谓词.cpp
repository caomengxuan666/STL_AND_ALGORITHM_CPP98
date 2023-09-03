//
// Created by Lenovo on 2023/5/23.
//
/*
 *
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

class myCompare {
public:
    bool operator()(int val1, int val2) {
        return val1 > val2;
    }
};

void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    sort(v.begin(), v.end());
    for (auto &it: v) {
        cout << it << endl;
    }
    cout << endl;

    //使用函数对象，改变算法策略，变排序规则为从大到小
    sort(v.begin(), v.end(), myCompare());
    for (auto &it: v) {
        cout << it << endl;
    }
    cout << endl;
}

int main() {
    test01();
}