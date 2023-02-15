#include"iostream"
using namespace std;
#include"vector"
#include"algorithm"
// int main(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     //第一种遍历方式
//     //创建迭代器
//     // vector<int>::iterator itBegin=v.begin();
//     // vector<int>::iterator itEnd=v.end();
//     // //遍历
//     // while(itBegin!=itEnd){
//     //     cout<<*itBegin<<endl;
//     //     itBegin++;
//     // }

//     //第二种遍历方式
//     // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//     //     cout<<"*it="<<*it<<endl;
//     // }

//     //第三种遍历方式
//     for_each(v.begin(),v.end(),[](int val){cout<<val<<endl;});

// }