#include "template_Array.hpp"
void printArray(MyArray<int> &arr1)
{
    for (int i = 0; i < arr1.getSize(); i++)
    {
        cout << arr1[i] << " ";
    }
}
void test01()
{
    MyArray<int> arr1(5);
    for (int i = 0; i < 5; i++)
    {
        arr1.Push_back(i);
    }
    cout << "arr1的值为：" << endl;
    printArray(arr1);
    cout << "arr1的容量为：" << arr1.getCapacity() << endl;
    cout << "arr1的大小为：" << arr1.getSize() << endl;
    // MyArray<int>arr2(arr1);
    // MyArray<int>arr3(100);
    //  arr3=arr1;
}

class Person
{
public:
    int m_Age;
    string m_Name;

public:
    Person()
    {
    }
    Person(string name, int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
};
void printPersonArray(MyArray<Person> &personArr)
{
    for (int i = 0; i < personArr.getSize(); i++)
    {
        cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
    }
}
void test02()
{
    MyArray<Person> pArray(5);
    Person p1("孙悟空", 30);
    Person p2("韩信", 20);
    Person p3("妲己", 18);
    Person p4("王昭君", 15);
    Person p5("赵云", 24);
    pArray.Push_back(p1);
    pArray.Push_back(p2);
    pArray.Push_back(p3);
    pArray.Push_back(p4);
    pArray.Push_back(p5);
    printPersonArray(pArray);

    cout << "pArray的大小：" << pArray.getSize() << endl;
    cout << "pArray的容量：" << pArray.getCapacity() << endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}