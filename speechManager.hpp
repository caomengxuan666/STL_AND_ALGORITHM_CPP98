#ifndef CLION_WORK_SPEECHMANAGER_HPP
#define CLION_WORK_SPEECHMANAGER_HPP

#include "iostream"
#include "speaker.hpp"
#include "vector"
#include "deque"
#include "ctime"
#include "map"


using namespace std;

class SpeechManager {
public:
    SpeechManager();

    void menu();

    void newSpeaker();

    void numIndex();

    void depDivide();

    void startCompetition();

    void mark();

    void showRank();

    void saveRecord();

    void loadRecord();

    void clearRecord();

    void printScore();

    vector<speaker> speakerStore;
    vector<speaker> v1;
    vector<speaker> v2;
    deque<double> marks;
    map<speaker, double> m;
    vector<speaker> winners;

    size_t round;
    string recordFile;
};

SpeechManager::SpeechManager() : round(1) {
    newSpeaker();
    numIndex();
}

void SpeechManager::menu() {
    cout << "----------------------------------" << endl;
    cout << "Welcome to use the System!" << endl;
    cout << "Please enter a number to start" << endl;
    cout << "1.quit the system" << endl;
    cout << "2.start a new competition" << endl;
    cout << "3.look up for previous competition records" << endl;
    cout << "4.delete the previous records" << endl;
    cout << "----------------------------------" << endl;

}

void SpeechManager::newSpeaker() {
    for (int i = 0; i < 12; i++) {
        string str1 = "Player";
        str1 += i;
        speaker s(str1);
        speakerStore.push_back(s);
    }
}

void SpeechManager::numIndex() {
    srand((unsigned int) time(0));
    for (auto &it: speakerStore) {
        int num = rand() % 1 + 12;
        it.m_Index = num;
    }
}

void SpeechManager::depDivide() {
    switch (round) {
        case 1:
            for (auto it: speakerStore) {
                if (it.m_Index <= 6) {
                    v1.push_back(it);
                    it.DepIndex = 1;
                } else {
                    v2.push_back(it);
                    it.DepIndex = 2;
                }
                break;
            }
        case 2:
            for (auto &it: speakerStore) {
                if (it.m_Index <= 3) {
                    v1.push_back(it);
                    it.DepIndex = 1;
                } else {
                    v2.push_back(it);
                    it.DepIndex = 2;
                }
                break;
            }
        default:
            cout << "Error:Unexpected round !" << endl;
            break;
    }

}

void SpeechManager::startCompetition() {
    this->depDivide();
    cout << "第" << this->round << "轮比赛开始" << endl;
    this->mark();
}

void SpeechManager::mark() {
    for (auto &it: marks) {
        srand((unsigned int) time(0));
        double num = rand() % 51 + 50.0;
        marks.push_back(num);
    }

}

void SpeechManager::printScore() {

}

#endif //CLION_WORK_speechManager_HPP