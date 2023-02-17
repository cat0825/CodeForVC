#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
class Print{
    public:
    void operator()(int val){
        cout<<val<<" ";
    }
};


void test01(){
    srand((unsigned int)time(NULL));
    vector<int> v;
	for(int i = 0 ; i < 10;i++)
	{
		v.push_back(i);
	}
    for_each(v.begin(),v.end(),Print());
    cout<<endl;
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),Print());
    cout<<endl;
}

int main(){
    test01();
    return 0;
}