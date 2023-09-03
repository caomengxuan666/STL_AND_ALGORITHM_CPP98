//
// Created by Lenovo on 2023/5/25.
//
/*
 * replace_if
 * ��������:��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
 * ����ԭ��
 * replace_if(iterator beg,iterator end,_pred,newvalue)
 */
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

class GreaterThan50 {
public:
    bool operator()(int val) {
        return val > 50;
    }
};

void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);
    auto F = [](int val) {
        cout << "val= " << val << " ";
    };
    cout << "�滻ǰ" << endl;
    for_each(v.begin(), v.end(), F);
    cout << endl;

    cout << "�滻��" << endl;
    replace_if(v.begin(), v.end(), GreaterThan50(), 2000);
    for_each(v.begin(), v.end(), F);
}

int main() {
    test01();
}