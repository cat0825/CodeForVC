#include "iostream"
#include "set"
#include "string"
using namespace std;

void test01()
{
	set<int> S;
	S.insert(10);
	S.insert(40);
	S.insert(30);
	S.insert(20);
	S.insert(40);
	for (set<int>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
}

void test02()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);
	s1.swap(s2);
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (set<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	set<int> s1;
	// 插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "找到了元素 ： " << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	// 统计
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test04()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	// 默认从小到大
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// 指定排序规则
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class MyCompare1
{
public:
	bool operator()(const Person &p1, const Person &p2) const
	{
		return p1.m_Age < p2.m_Age;
	}
};
void test05()
{
	set<Person, MyCompare1> s;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	for (set<Person, MyCompare1>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "Name:" << it->m_Name << " Age:" << it->m_Age << endl;
	}
}

// int main()
// {
// 	// test01();
// 	// test02();
// 	// test03();
// 	// test04();
// 	test05();
// 	return 0;
// }