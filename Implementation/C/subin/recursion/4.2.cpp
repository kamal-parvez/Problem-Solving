#include<iostream>
using namespace std;

int a;
static int b;

void func()
{
    a+=1;
    b+=1;
}
int main()
{
    func();
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
