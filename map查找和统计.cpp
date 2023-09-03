//
// Created by Lenovo on 2023/5/22.
//
/*
 * map查找和统计
 * 函数原型
 * find(key)    //查找Key是否存在，返回该键的元素的迭代器；若不存在，返回map.end()
 * count(key)   //统计key的元素个数
 */
#include "iostream"
#include "map"

using namespace std;

void test01() {
    //查找
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(map<int, int>::value_type(3, 30));
    m.insert(map<int, int>::value_type(3, 40));


    auto pos = m.find(3);
    if (pos != m.end()) {
        cout << "查找到了元素key=" << (*pos).first << "value=" << (*pos).second << endl;
    } else {
        cout << "未找到元素" << endl;
    }
    //统计
    //注意，在map容器当中，只能插入一个key值，即使value值不一样，也不能再插入重复的key，所以计数只有0和1
    //multimap的count统计可能大于1
    size_t num = m.count(3);
    cout << "num=" << num << endl;

}

int main() {
    test01();
}