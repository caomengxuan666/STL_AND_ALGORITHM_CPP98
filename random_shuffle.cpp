//
// Created by Lenovo on 2023/5/25.
//
/*
 * random_shuffle
 * 功能描述
 * 指定范围内的元素随机调整次序
 * 函数原型
 * random_shuffle(iterator beg,iterator end)
 */
#include "iostream"
#include "algorithm"
#include "vector"
#include "ctime"

using namespace std;

void test01() {
    srand((size_t) time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), [](int val) { cout << val << " "; });

}

int main() {
    test01();
}