#include "iostream"
#include "map"
#include "string"
using namespace std;
template <class T, class T1>
void printMap(map<T, T1> &m)
{
    for (typename map<T, T1>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " "<< it->second << endl;
    }
    //cout << endl;
}
void test01()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));

    printMap(m);
}
class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    bool operator<(const Person &p) const
    {
        if (this->m_Age == p.m_Age)
        {
            return this->m_Name < p.m_Name;
        }
        return this->m_Age < p.m_Age;
    } 
    // 重载输出流运算符
    friend ostream &operator<<(ostream &os, const Person &p)
    {
        os << "name: " << p.m_Name << ", age: " << p.m_Age<<endl ;
        return os;
    }
    string m_Name;
    int m_Age;
};

void test02()
{
    map<Person, int> m;
    // m[{"aaa", 10}] = 100;
    // m[{"bbb", 20}] = 200;
    // m[{"ccc", 30}] = 300;

    m.insert(pair<Person,int>(Person("aaa", 10), 100));
    printMap(m);
}

// int main()
// {
//     // test01();
//     test02();
//     return 0;
// }