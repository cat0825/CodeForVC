#include "iostream"
#include "stack"
using namespace std;

void test01()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
        

        cout << "栈的大小为：" << s.size() << endl;
    }
}

// int main(){
//     test01();
//     return 0;
// }