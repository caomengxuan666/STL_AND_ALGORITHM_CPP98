//
// Created by Lenovo on 2023/5/25.
//
/*
 *  set_union
 *  功能描述:
 *  求两个集合的并集
 *  函数原型
 *  set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
 *  注意:两个集合必须是有序序列
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
    vector<int> vTarget(v1.size() + v2.size());//目标容器开辟空间
    //最特殊情况 两个容器没有交集，并集就是两个容器size相加

    auto itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    auto F = [](int val) {
        cout << "val= " << val << " ";
    };
    for_each(vTarget.begin(), itEnd, F);

}

int main() {
    test01();
}