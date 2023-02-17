#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    v.push_back(9);
    int num = count(v.begin(), v.end(), 9);
    cout << "num=" << num << endl;
}

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    bool operator==(const Person &p){
        if(this->m_Age==p.m_Age&&this->m_Name==p.m_Name){
            return true;
        }else{
            return false;
        }
    }
    string m_Name;
    int m_Age;
};

void test02()
{
    vector<Person> v;
    v.push_back(Person("aaa", 10));
    v.push_back(Person("bbb", 20));
    v.push_back(Person("ccc", 30));
    v.push_back(Person("ddd", 40));
    int num=count(v.begin(),v.end(),Person("aaa",10));

    cout << "num=" << num << endl;
}
class MyCount{
    public:
    bool operator()(Person &p){
        if(p.m_Age==10){
            return true;
        }else{
            return false;
        }
    }
};
void test03(){
    vector<Person>v;
    v.push_back(Person("aaa", 10));
    v.push_back(Person("bbb", 20));
    v.push_back(Person("ccc", 30));
    v.push_back(Person("ddd", 40));
    int num=count_if(v.begin(),v.end(),MyCount());
    cout << "num=" << num << endl;
}

// int main()
// {
//     // test01();
//     // test02();
//     test03();
//     return 0;
// }