//
// Created by Lenovo on 2023/5/25.
//
/*
 * 常用排序算法
 * sort     //对容器内元素进行排序
 * random_shuffle   //洗牌，指定范围内元素随机调整次序
 * merge    //将容器元素合并并存储到另一容器中
 * reverse  //反转指定范围的元素
 *
 * sort
 * 功能描述:
 * 对容器内元素进行排序
 * 函数原型
 * sort(iterator beg,iterator end,_Pred),默认不填的情况下为从小到大的排序规则
 * 按值查找元素，找到返回指定位置的迭代器，找不到返回结束位置的迭代器
 */
#include "iostream"
#include "vector"
#include "algorithm"
#include "functional"

using namespace std;
class mySort{
public:
    bool operator()(int val1,int val2){
        return val1>val2;
    }
};
void test01() {
    vector<int> v;
    v.push_back(80);
    v.push_back(50);w
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);
    v.push_back(30);
    sort(v.begin(), v.end());

    auto F = [](int val) {
        cout << "val=" << val << " ";
    };
    for_each(v.begin(), v.end(), F);
    cout<<endl;

    sort(v.begin(),v.end(),mySort());
    for_each(v.begin(), v.end(), F);
    cout<<endl;

    sort(v.begin(),v.end(),greater());//内建的函数对象，同样可以实现降序功能
    for_each(v.begin(), v.end(), F);
    cout<<endl;


}

int main() {
    test01();
}