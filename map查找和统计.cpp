//
// Created by Lenovo on 2023/5/22.
//
/*
 * map���Һ�ͳ��
 * ����ԭ��
 * find(key)    //����Key�Ƿ���ڣ����ظü���Ԫ�صĵ��������������ڣ�����map.end()
 * count(key)   //ͳ��key��Ԫ�ظ���
 */
#include "iostream"
#include "map"

using namespace std;

void test01() {
    //����
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(map<int, int>::value_type(3, 30));
    m.insert(map<int, int>::value_type(3, 40));


    auto pos = m.find(3);
    if (pos != m.end()) {
        cout << "���ҵ���Ԫ��key=" << (*pos).first << "value=" << (*pos).second << endl;
    } else {
        cout << "δ�ҵ�Ԫ��" << endl;
    }
    //ͳ��
    //ע�⣬��map�������У�ֻ�ܲ���һ��keyֵ����ʹvalueֵ��һ����Ҳ�����ٲ����ظ���key�����Լ���ֻ��0��1
    //multimap��countͳ�ƿ��ܴ���1
    size_t num = m.count(3);
    cout << "num=" << num << endl;

}

int main() {
    test01();
}