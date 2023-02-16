#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<deque>
#include<ctime>
using namespace std;

class Person{
    public:
    int score;
    string name;
    Person(string name,int score){
        this->name=name;
        this->score=score;
    }
};

//创建一个容器，存放Person对象

void createPerson(vector<Person>&v){
    string nameSeed="ABCDE";
    for(int i=0;i<5;i++){
        string name="选手";
        name+=nameSeed[i];
        int score=0;
        Person p(name,score);
        v.push_back(p);
    }
}

//打分

void setScore(vector<Person>&v){
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
        deque<int>d;
        for(int i=0;i<10;i++){
            int score=rand()%41+60;
            d.push_back(score);
        }
        sort(d.begin(),d.end());
        d.pop_front();
        d.pop_back();
        int sum=0;
        for(deque<int>::iterator dit=d.begin();dit!=d.end();dit++){
            sum+=*dit;
        }
        int avg=sum/d.size();
        it->score=avg;
    }
}

//显示最后得分

void showScore(vector<Person>&v){
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
        cout<<"姓名:"<<it->name<<"得分:"<<it->score<<endl;
    }
}

// int main(){
//     srand((unsigned int)time(NULL));
//     vector<Person>v;
//     createPerson(v);
//     setScore(v);
//     showScore(v);
//     return 0;
// }

