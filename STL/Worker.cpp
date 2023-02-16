#include "iostream"
#include "vector"
#include "map"
#include "string"
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
    string name;
    int salary;
    Worker(){}
    Worker(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
};

void createWorker(vector<Worker> &v)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        Worker worker;
        worker.name = "员工";
        worker.name += nameSeed[i];
        worker.salary = rand() % 10000 + 10000;
        v.push_back(worker);
    }
}

// 员工分组

void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        int deptId = rand() % 3;
        m.insert(make_pair(deptId, *it));
    }
}

// 显示员工

void showWorkerByGroup(multimap<int, Worker> &m)
{
    cout << "策划部门员工:" << endl;
    multimap<int, Worker>::iterator pos = m.find(CEHUA);
    int count = m.count(CEHUA);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "姓名:" << pos->second.name << "工资:" << pos->second.salary << endl;
    }

    cout << "----------------------" << endl;
    cout << "美术部门： " << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU); // 统计具体人数
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "姓名： " << pos->second.name << " 工资： " << pos->second.salary << endl;
    }

    cout << "----------------------" << endl;
    cout << "研发部门： " << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA); // 统计具体人数
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "姓名： " << pos->second.name << " 工资： " << pos->second.salary << endl;
    }
}

// int main(){
//     vector<Worker> vWorker;
//     createWorker(vWorker);

// 	//2、员工分组
// 	multimap<int, Worker>mWorker;
// 	setGroup(vWorker, mWorker);


// 	//3、分组显示员工
// 	showWorkerByGroup(mWorker);
// }
