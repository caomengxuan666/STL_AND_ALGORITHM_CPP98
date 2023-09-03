#ifndef CLION_WORK_SPEAKER_HPP
#define CLION_WORK_SPEAKER_HPP
using namespace std;
class speaker {
public:
    string name;
    int m_Index;
    int DepIndex;
    double score;

    speaker(const string& name) : name(name), m_Index(0), DepIndex(0), score(0.0) {}
};
#endif //CLION_WORK_speaker_HPP