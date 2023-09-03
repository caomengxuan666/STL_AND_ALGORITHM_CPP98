//
// Created by Lenovo on 2023/5/7.
//
/*
 ������ѡ�֣��ֱ�ΪABCDE��10����ί�ֱ��ÿһ��ѡ�ֽ��д�֣�ȥ����ί����ͷ֣�ȡƽ����
ʵ�ֲ���
 1.��������ѡ�֣��ŵ�vector��
 2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ洢��deque������
 3.sort�㷨��deque�����зֱ�����ȥ����߷ֺ���ͷ�
 4.deque��������һ�飬�ۼ��ܷ�
 5.��ȡƽ����
 */
#include "iostream"
#include "deque"
#include "algorithm"
#include "vector"
#include "ctime"

using namespace std;

class Person {
public:
    Person(string name, int score) : m_Name(name), m_Score(score) {}

    string m_Name;
    int m_Score;
};

void createPerson(vector<Person> &v) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++) {
        string name = "ѡ��";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        //��������person������뵽������
        v.push_back(p);
    }
}

void setScore(vector<Person> &v) {

    for (auto it = v.begin(); it < v.end(); it++) {
        //����ί�ķ������뵽deque������
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 41 + 60; //60`100
            d.push_back(score);
        }
        cout << "ѡ��" << it->m_Name << "����" << it->m_Score << endl;
        for (auto it: d) {
            cout << it << " ";
        }
        cout << endl;
        //����
        sort(d.begin(), d.end());

        //ȥ����߷ֺ���ͷ�
        d.pop_back();
        d.pop_front();

        //ȡƽ����
        int sum = 0;
        for (auto it: d) {
            sum += it;
        }
        int ave = sum / d.size();
        //��ƽ���ָ�ֵ��ѡ��
        it->m_Score = ave;
    }
}

int main() {
    //���������
    srand((unsigned int) time(NULL));
//1.��������ѡ��
    vector<Person> v;
    createPerson(v);
    //����
    for (auto it: v) {
        cout << "����" << it.m_Name << "����" << it.m_Score << endl;
    }
    cout << endl;
//2.������ѡ�ִ��
    setScore(v);

//3.��ʾ���÷�
    for (auto it: v) {
        cout << "����" << it.m_Name << "����" << it.m_Score << endl;
    }
}
