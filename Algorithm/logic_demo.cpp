#include"iostream"
#include"algorithm"
#include"vector"
//#include"functional"
using namespace std;

void test01(){
    vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;

    vector<int>v1;
    v1.resize(v.size());
    transform(v.begin(),v.end(),v1.begin(),logical_not<int>());
    for (vector<int>::iterator it = v1.begin();it!= v1.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


// int main(){
//     test01();
//     return 0;
// }