#include"iostream"
#include"string"
using namespace std;

void test01(){
    //string s1;
    // const char* str="hello world";
    // string s1(str);
    // cout<<"s1="<<s1<<endl;
    // //string s2;
    // string s2(s1);
    // cout<<"s2="<<s2<<endl;
    // string s3(10,'a');
    // cout<<"s3="<<s3<<endl;
    string str1;
    str1.assign("hello c++");
    cout<<"str1="<<str1<<endl;
    string str2=str1.substr(0,5);
    cout<<"str2="<<str2<<endl;
    
}

// int main(){
//     test01();
//     return 0;
// }