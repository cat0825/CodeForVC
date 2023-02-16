#include"iostream"
#include"vector"
using namespace std;

void printVector(vector<int>&v){
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01(){
    vector<int>v;
    for(int i=0;i<5;i++){
        v.push_back(i);
    }
    printVector(v);
    vector<int>v1(v.begin(),v.end());
    printVector(v1);
    vector<int>v3(10,100);
    printVector(v3);
    vector<int>v4(v);
    printVector(v4);


    vector<int>v5;
    v5=v;
    printVector(v5);

    vector<int>v6;
    v6.assign(v.begin(),v.end());
    printVector(v6);

}

void test02(){
    vector<int>v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    if(v.empty()){
        cout<<"v is empty"<<endl;
    }else{
        cout<<"v不为空!"<<endl;
        cout<<"v的容量为:"<<v.capacity()<<endl;
        cout<<"v的大小为:"<<v.size()<<endl;
        printVector(v);
    }
    v.resize(15,100);
    // printVector(v);
    // v.resize(5);
    // printVector(v);
    // v.insert(v.begin(),2,1000);
    // printVector(v);
    // v.erase(v.begin());
    // printVector(v);
    // v.erase(v.begin());
    // printVector(v);
    //v.erase(v.begin(),v.end());
    // v.clear();
    // printVector(v);

    cout<<v.at(0)<<endl;
    cout<<v[0]<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    
    
}
    
void test03(){
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    vector<int>v2;
    for (int i = 10; i >0; i--)
    {
        v2.push_back(i);
    }
    cout<<"交换前:"<<endl;
    printVector(v1);
    printVector(v2);
    v1.swap(v2);
    cout<<"交换后:"<<endl;
    printVector(v1);
    printVector(v2);
}

void test04(){
    vector<int>v1;
    for(int i=0;i<10000;i++){
        v1.push_back(i);
    }
    cout<<"v1的容量为:"<<v1.capacity()<<endl;
    cout<<"v1的大小为:"<<v1.size()<<endl;
    v1.resize(3);
    vector<int>(v1).swap(v1);
    cout<<"v1的容量为:"<<v1.capacity()<<endl;
    cout<<"v1的大小为:"<<v1.size()<<endl;
}

void test05(){
    vector<int>v;
    int num=0;
    int* p=NULL;
    v.reserve(10000);
    for(int i=0;i<10000;i++){
        v.push_back(i);
        if(p!=&v[0]){
            p=&v[0];
            num++;
        }
    }
    cout<<"num="<<num<<endl;
}
// int main(){
//     //test01();
//     //test02();
//     //test03();
//     //test04();
//     test05();
//     return 0;
// }