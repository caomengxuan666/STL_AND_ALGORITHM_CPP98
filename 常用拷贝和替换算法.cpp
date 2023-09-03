//
// Created by Lenovo on 2023/5/25.
//
/*
 * 常用拷贝和替换算法
 *  copy    //容器内指定范围的元素拷贝到另一容器中
 *  replace     //将容器内指定范围的旧元素修改为新元素
 *  replace_if  //容器内指定范围的满足条件的元素替换为新元素
 *  swap    //互换两个容器的元素
 *
 *  copy
 *  容器内制定范围的元素拷贝到另一容器中
 *  函数原型
 *  copy(iterator beg,iterator end,iterator dest)
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    vector<int> v2;
    v2.resize(v1.size());
    copy(v1.begin(), v1.end(), v2.begin());
    auto F = [](int val) {
        cout << "val= " << val << " ";
    };
    for_each(v1.begin(), v1.end(), F);
    cout<<endl;
    for_each(v2.begin(), v2.end(), F);
}

int main() {
    test01();
}