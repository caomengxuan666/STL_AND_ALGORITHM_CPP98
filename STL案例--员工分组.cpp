//
// Created by Lenovo on 2023/5/22.
//
/*
 *  案例--员工分组
 *  案例描述
 *  公司今天招聘了10名员工:"ABCDEFGHIJ",10名员工进入公司后，需要指派员工在哪个公司工作
 *  员工信息有   姓名，工资组成；    部门分为：策划。美术。研发
 *  随机给10名员工分配部门和工资
 *  通过multiset进行信息的插入，key(部门编号)，value(员工)
 *  分部门显示员工信息
 *
 *  实现步骤：
 *  1.创建10名员工，放到vector中
 *  遍历vector容器，取出每个员工，进行随机分组
 *  分组后，将员工部门编号作为key,具体员工作为value,放到multiset容器中
 *  分部门显示员工信息
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
    Worker() : m_Name("员工"), salary(0) {}

    string m_Name;
    int salary;
};

void disPlayWorkers(const vector<Worker> &v) {
    auto F = [](const Worker &worker) {
        cout << "姓名:" << worker.m_Name << " " << "薪水:" << worker.salary << endl;
    };
    for_each(v.begin(), v.end(), F);
}

void createNewWorker(vector<Worker> &v) {
    string nameSeed = "ABCDEFGHIJ";

    //随机取名以及随机赋工资
    for (int i = 0; i < 10; i++) {
        Worker worker;
        worker.m_Name += nameSeed[i];
        worker.salary = rand() % 10000 + 10000;   //10000~19999

        v.push_back(worker);
    }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
    for (auto &it: v) {
        //产生随机部门的编号
        int depId = rand() % 3;//产生一个0 1 2随机数

        //将员工插入到分组中
        //key部门编号，value具体员工
        m.insert(make_pair(depId, it));
    }
}

void DisplayWorkersByGroup(multimap<int, Worker> &m) {
    cout << "策划部门:" << endl;
    auto pos = m.find(CeHua);
    size_t count = m.count(CeHua);//统计策划部门具体人数
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "姓名" << pos->second.m_Name << " " << "工资:" << pos->second.salary << endl;
    }
    cout << "美术部门" << endl;
    pos = m.find(MeiShu);
    count = m.count(MeiShu);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "姓名" << pos->second.m_Name << " " << "工资:" << pos->second.salary << endl;
    }
    cout << "研发部门" << endl;
    count = m.count(YanFa);
    pos = m.find(YanFa);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "姓名" << pos->second.m_Name << " " << "工资:" << pos->second.salary << endl;
    }
}

int main() {
    //1.创建员工
    vector<Worker> v;
    createNewWorker(v);
    disPlayWorkers(v);
    //2.员工分组
    multimap<int, Worker> mWorker;
    setGroup(v, mWorker);
    //3.分组显示员工
    DisplayWorkersByGroup(mWorker);
}