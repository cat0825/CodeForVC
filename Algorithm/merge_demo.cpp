#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
/*merge函数要求两个容器必须都是有序的*/
void test01(){
    vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10 ; i+=2) 
    {
		v1.push_back(i);
	}
    v2.push_back(1);
    v2.push_back(5);
    v2.push_back(3);
    v2.push_back(9);
    v2.push_back(7);
    sort(v2.begin(), v2.end());
    vector<int> vTarget;
    vTarget.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), vTarget.end(), [](int val){cout << val << " ";});
}

// int main(){
//     test01();
//     return 0;
// }