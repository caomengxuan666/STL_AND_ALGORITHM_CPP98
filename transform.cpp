//
// Created by Lenovo on 2023/5/24.
//
/*
 * transform
 * 功能描述:搬运容器到另一个容器中
 * 函数原型
 *  transform(iterator beg1,iterator end1,iterator beg2_,_func)
 *  //beg1  源容器开始迭代器
 *  //end1  源容器结束迭代器
 *  //beg2  目标容器开始迭代器
 *  //_func 函数对象或者函数对象
 */
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

class Transform {
public:
    int operator()(int v) {
        return v;
    }
};

class Myprint {
public:
    void operator()(int val) {
        cout << val << " ";
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int> vTarget; //目标容器
    vTarget.resize(v.size());//目标容器必须奥提前开辟空间
    transform(v.begin(), v.end(), vTarget.begin(), Transform());

    for_each(vTarget.begin(), vTarget.end(), Myprint());
    cout << endl;
}

int main() {
    test01();
}