//
// Created by Lenovo on 2023/5/22.
//
/*
 * �����������
 * ���غ������������࣬������Ϊ��������
 * ��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
 * ���ʣ���������(�º���)��һ���࣬����һ������
 *
 * ��������ʹ��
 * ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
 * �������󳬳���ͨ�����ĸ����������������Լ���״̬
 * �������������Ϊ��������
 */
#include "iostream"

using namespace std;

class myAdd {
public:
    myAdd() : count(0) {}

    int operator()(int val1, int val2) {
        count++;
        return val1 + val2;
    }

    int count;
};

class myPrint {
public:
    void operator()(const string &test) {
        cout << test << endl;
    }
};

void test01() {
    myAdd a;//��������
    cout << a(10, 10) << endl;
    cout << "myPrint���õĴ���Ϊ" << a.count << endl;
}

void test02() {
    myPrint a;
    a("hello world");
}

void doPrint(myPrint &mp, string test) {
    mp(test);
}

void test03() {
    myPrint a;
    doPrint(a, "cmx");
}

int main() {
    test01();
    test02();
    test03();
}