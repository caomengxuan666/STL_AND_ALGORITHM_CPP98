//
// Created by Lenovo on 2023/5/22.
//
/*
 *  ����
 *  ����bool���͵ķº�����Ϊν��
 *  ���operator����һ����������ô����һԪν��
 *  �º��� ����ֵ������bool���ͣ���Ϊν��
 *  һԪν��
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
    //������������û�д���5������
    auto it = find_if(v.begin(), v.end(), GreaterThanFive());//����ֱ�Ӵ���һ��������������
    if (it == v.end())cout << "δ�ҵ�" << endl;
    else cout << "�ҵ��˴���5������Ϊ" << *it << endl;
}

int main() {
    test01();
}