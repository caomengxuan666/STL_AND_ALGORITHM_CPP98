//
// Created by Lenovo on 2023/5/25.
//
/*
 * 常用集合算法
 * set_intersection //求两个容器的交集
 * set_union    //求两个容器的并集
 * set_difference   //求两个容器的差集
 *
 * 函数原型
 * set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
 * 其返回值是交集中最后一个元素的位置
 *
 *  注意：原容器必须是有序序列
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> vTarget(min(v1.size(), v2.size()));
    //目标容器需要提前开辟空间
    //最特殊空间，大容器包含小容器，开辟小空间，取小容器的size即可

    auto itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    auto F = [](int val) {
        cout << "val= " << val << " ";
    };
    for_each(vTarget.begin(), itEnd, F);//用自己记录下来的itEnd，避免出现把未初始化的值打印出来
}

int main() {
    test01();
}