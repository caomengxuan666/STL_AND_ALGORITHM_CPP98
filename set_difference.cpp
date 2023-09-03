//
// Created by Lenovo on 2023/5/25.
//
/*
 *  set_difference
 *  功能描述
 *  函数原型
 *  set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
 *  差集:对于容器a来说，容器b中有但是自己容器中没有的叫做a和b的差集
 *  反之对于容器b来说，容器a中有但是自己容器中没有的叫做b和a的差集
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> vTarget(max(v1.size(), v2.size()));//最特殊的情况是v2,v1没有交集
    auto itEnd=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), itEnd, [](int val) { cout << "val= " << val << " "; });
}

int main() {
    test01();
}