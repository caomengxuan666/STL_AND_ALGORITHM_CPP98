//
// Created by Lenovo on 2023/5/25.
//
/*
 *  swap
 *  功能描述
 *  互换两个容器的元素
 *  函数原型
 *  swap(container c1,container c2)
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
        v2.push_back(100 - i);
    }
    cout << "交换前" << endl;
    for_each(v1.begin(), v1.end(), [](int val) { cout << val << " "; });
    cout << endl;
    for_each(v2.begin(), v2.end(), [](int val) { cout << val << " "; });

    swap(v1, v2);

    cout<<endl;
    cout << "交换后" << endl;
    for_each(v1.begin(), v1.end(), [](int val) { cout << val << " "; });
    cout << endl;
    for_each(v2.begin(), v2.end(), [](int val) { cout << val << " "; });

}

int main() {
    test01();
}