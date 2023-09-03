//
// Created by Lenovo on 2023/5/24.
//
/*
 * STL常用算法
 * 算法主要是由头文件<algorithm><functional><numeric>组成
 * <algorithm>是所有STL文件中最大的一个，涉及到比较，交换，查找，遍历操作，复制，修改等等
 * <numeric>体积最小，只包括几个在序列上面进行简单数学运算的模板函数
 * <functional>定一个一些模板类用以声明函数对象
 *
 * 常用遍历算法
 * for_each //遍历容器
 * transform    //搬运容器到另一个容器中
 *
 * for_each
 * 函数原型
 * for_each(iterator beg,iterator end,_func);
 *
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

//普通函数
void print01(int val) {
    cout << val << endl;
}

class print02{
public:
    void operator()(int val){
        cout<<val<<endl;
    }
};
void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), print01);

    for_each(v.begin(),v.end(),print02());
}

int main() {
    test01();
}