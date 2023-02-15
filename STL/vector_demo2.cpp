#include "iostream"
#include "vector"
using namespace std;
// vector容器存放自定义数据类型
class Person
{
public:
    int m_Age;
    string m_Name;
    Person(string name, int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
};
void test01()
{
    vector<Person> v;
    Person p1("孙悟空", 30);
    Person p2("韩信", 20);
    Person p3("妲己", 18);
    Person p4("王昭君", 15);
    Person p5("赵云", 24);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "姓名:" << (*it).m_Name << " 年龄:" << (*it).m_Age << endl;
        cout << "姓名:" << it->m_Name << " 年龄:" << it->m_Age << endl;
    }
}

void test02()
{
    vector<Person *> v1;
    Person p1("孙悟空", 30);
    Person p2("韩信", 20);
    Person p3("妲己", 18);
    Person p4("王昭君", 15);
    Person p5("赵云", 24);
    v1.push_back(&p1);
    v1.push_back(&p2);
    v1.push_back(&p3);
    v1.push_back(&p4);
    v1.push_back(&p5);
    for(vector<Person*>::iterator it=v1.begin();it!=v1.end();it++){
        cout<<"姓名:"<<(*it)->m_Name<<" 年龄:"<<(*it)->m_Age<<endl;
    }
}

// int main()
// {
//     //test01();
//     test02();
//     return 0;
// }