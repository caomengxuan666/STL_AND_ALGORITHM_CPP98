//
// Created by Lenovo on 2023/5/21.
//
/*
 * map插入和删除
 * map容器进行插入数据和删除数据
 * 函数原型
 * insert(elem)     //在容器中插入元素
 * clear()      //清除所有元素
 * erase(pos)   //删除pos迭代器所指的元素，返回下一个元素的迭代器
 * erase(beg,end)   //删除区间(beg,end）中的所有元素，返回下一个元素的迭代器
 * erase(key)   //删除容器中值为key的元素
 */
#include "iostream"
#include "map"
#include "algorithm"

using namespace std;

void test01() {
    map<int, int> m;
    //插入 第一种
    m.insert(pair<int, int>(1, 10));
    //插入 第二种
    m.insert(make_pair(2, 20));  //make_pair不需要写模板参数，只需要写key和value
    //插入 第三种
    m.insert(map<int, int>::value_type(3, 30));
    //插入 第四种 注意，不建议使用这一种插数字，如果没有这个key，会自动创建一个对应key的value
    //如果能确定key值，可以利用key来访问value,所以拿来查询是比较方便的
    m[4] = 40;
    auto F = [](const pair<int, int> &p) {
        cout << "key=" << p.first << " " << "value=" << p.second << endl;
    };
    for_each(m.begin(), m.end(), F);
    cout<<endl;
    //按照位置删除
    m.erase(m.begin());
    for_each(m.begin(), m.end(), F);
    cout<<endl;

    m.erase(3);//按照key删除
    for_each(m.begin(), m.end(), F);
    cout<<endl;


}

int main() {
    test01();
}