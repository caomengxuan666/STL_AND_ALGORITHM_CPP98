//
// Created by Lenovo on 2023/5/7.
//
/*
 有五名选手，分别为ABCDE，10个评委分别对每一名选手进行打分，去除评委中最低分，取平均分
实现步骤
 1.创建五名选手，放到vector中
 2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分存储到deque容器中
 3.sort算法对deque容器中分别排序，去除最高分和最低分
 4.deque容器遍历一遍，累加总分
 5.获取平均分
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
        string name = "选手";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        //将创建的person对象放入到容器中
        v.push_back(p);
    }
}

void setScore(vector<Person> &v) {

    for (auto it = v.begin(); it < v.end(); it++) {
        //将评委的分数放入到deque容器中
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 41 + 60; //60`100
            d.push_back(score);
        }
        cout << "选手" << it->m_Name << "分数" << it->m_Score << endl;
        for (auto it: d) {
            cout << it << " ";
        }
        cout << endl;
        //排序
        sort(d.begin(), d.end());

        //去除最高分和最低分
        d.pop_back();
        d.pop_front();

        //取平均分
        int sum = 0;
        for (auto it: d) {
            sum += it;
        }
        int ave = sum / d.size();
        //将平均分赋值给选手
        it->m_Score = ave;
    }
}

int main() {
    //随机数种子
    srand((unsigned int) time(NULL));
//1.创建五名选手
    vector<Person> v;
    createPerson(v);
    //测试
    for (auto it: v) {
        cout << "姓名" << it.m_Name << "分数" << it.m_Score << endl;
    }
    cout << endl;
//2.给五名选手打分
    setScore(v);

//3.显示最后得分
    for (auto it: v) {
        cout << "姓名" << it.m_Name << "分数" << it.m_Score << endl;
    }
}
