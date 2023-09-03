//
// Created by Lenovo on 2023/5/22.
//
/*
 *  ����--Ա������
 *  ��������
 *  ��˾������Ƹ��10��Ա��:"ABCDEFGHIJ",10��Ա�����빫˾����Ҫָ��Ա�����ĸ���˾����
 *  Ա����Ϣ��   ������������ɣ�    ���ŷ�Ϊ���߻����������з�
 *  �����10��Ա�����䲿�ź͹���
 *  ͨ��multiset������Ϣ�Ĳ��룬key(���ű��)��value(Ա��)
 *  �ֲ�����ʾԱ����Ϣ
 *
 *  ʵ�ֲ��裺
 *  1.����10��Ա�����ŵ�vector��
 *  ����vector������ȡ��ÿ��Ա���������������
 *  ����󣬽�Ա�����ű����Ϊkey,����Ա����Ϊvalue,�ŵ�multiset������
 *  �ֲ�����ʾԱ����Ϣ
 */
#include "iostream"
#include "vector"
#include "set"
#include "algorithm"
#include "map"

using namespace std;

const int CeHua = 0;
const int MeiShu = 1;
const int YanFa = 2;

class Worker {
public:
    Worker() : m_Name("Ա��"), salary(0) {}

    string m_Name;
    int salary;
};

void disPlayWorkers(const vector<Worker> &v) {
    auto F = [](const Worker &worker) {
        cout << "����:" << worker.m_Name << " " << "нˮ:" << worker.salary << endl;
    };
    for_each(v.begin(), v.end(), F);
}

void createNewWorker(vector<Worker> &v) {
    string nameSeed = "ABCDEFGHIJ";

    //���ȡ���Լ����������
    for (int i = 0; i < 10; i++) {
        Worker worker;
        worker.m_Name += nameSeed[i];
        worker.salary = rand() % 10000 + 10000;   //10000~19999

        v.push_back(worker);
    }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
    for (auto &it: v) {
        //����������ŵı��
        int depId = rand() % 3;//����һ��0 1 2�����

        //��Ա�����뵽������
        //key���ű�ţ�value����Ա��
        m.insert(make_pair(depId, it));
    }
}

void DisplayWorkersByGroup(multimap<int, Worker> &m) {
    cout << "�߻�����:" << endl;
    auto pos = m.find(CeHua);
    size_t count = m.count(CeHua);//ͳ�Ʋ߻����ž�������
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "����" << pos->second.m_Name << " " << "����:" << pos->second.salary << endl;
    }
    cout << "��������" << endl;
    pos = m.find(MeiShu);
    count = m.count(MeiShu);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "����" << pos->second.m_Name << " " << "����:" << pos->second.salary << endl;
    }
    cout << "�з�����" << endl;
    count = m.count(YanFa);
    pos = m.find(YanFa);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "����" << pos->second.m_Name << " " << "����:" << pos->second.salary << endl;
    }
}

int main() {
    //1.����Ա��
    vector<Worker> v;
    createNewWorker(v);
    disPlayWorkers(v);
    //2.Ա������
    multimap<int, Worker> mWorker;
    setGroup(v, mWorker);
    //3.������ʾԱ��
    DisplayWorkersByGroup(mWorker);
}