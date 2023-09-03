//
// Created by Lenovo on 2023/5/22.
//
/*
 *  概念
 *  返回bool类型的仿函数成为谓词
 *  如果operator接受一个参数，那么叫做一元谓词
 *  仿函数 返回值类型是bool类型，称为谓词
 *  一元谓词
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

class GreaterThanFive {
public:
    bool operator()(int val) {
        return val > 5;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    //查找容器中有没有大于5的数字
    auto it = find_if(v.begin(), v.end(), GreaterThanFive());//可以直接创建一个匿名函数对象
    if (it == v.end())cout << "未找到" << endl;
    else cout << "找到了大于5的数字为" << *it << endl;
}

int main() {
    test01();
}