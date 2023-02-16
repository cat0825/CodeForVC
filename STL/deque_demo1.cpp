#include"iostream"
#include"deque"
#include "algorithm"
using namespace std;
void printDeque(const deque<int>&d){
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        //*it=100;
        cout<<*it<<" ";
    }
    cout<<endl;
}


void test01(){
    deque<int>d;
    for(int i=0;i<10;i++){
        d.push_back(i);
    }
    printDeque(d);
    deque<int>d1(d.begin(),d.end());
    printDeque(d1);
    deque<int>d2(d1);
    printDeque(d2);
    deque<int>d3(10,100);
    printDeque(d3);
}
//插入
void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.insert(d.begin(), 1000);
	printDeque(d);

	d.insert(d.begin(), 2,10000);
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);

}

void test03()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);
    sort(d.begin(),d.end());
	// d.erase(d.begin());
	 printDeque(d);

	// d.erase(d.begin(), d.end());
	// d.clear();
	// printDeque(d);
}

// int main(){
//     //test01();
//     //test02();
//     test03();
//     return 0;
// }