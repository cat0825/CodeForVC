#include"iostream"
#include"list"
#include"string"
using namespace std;

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};
// //自定排序规则
// bool myCompare(Person &p1,Person &p2){
//    return p1.m_Age<p2.m_Age;
// }


void test01(){
    list<Person>L;
    L.push_back(Person("aaa", 10));
    L.push_back(Person("bbb", 20));
    L.push_back(Person("ccc", 30));

    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
    }
    cout<<"排序前："<<endl;
    cout<<"-----------------"<<endl;
    //L.sort(myCompare);
    cout<<"排序后："<<endl;
    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
    }
    
    
}

// int main(){
//     test01();
//     return 0;
// }