#include "iostream"
using namespace std;

class Myprint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
    Myprint()
    {
        this->count = 0;
    }
    int count;
};

void test01()
{
    Myprint myprint;
    myprint("hello world");
}

void doPrint(Myprint &myprint,string test){
    myprint(test);
}

void test02()
{
    Myprint myprint;
    doPrint(myprint,"hello world");
}

// int main(){
//     test01();
//     test02();
//     return 0;
// }
