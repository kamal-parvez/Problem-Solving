#include<iostream>
using namespace std;

static int b;
int main()
{
    void *vp;
    int a=10;

    vp=&a;

    static int c;

    cout<<&a<<endl;
    cout<<vp<<endl;
   // cout<<*vp<<endl;
    cout<<*((int *)vp)<<endl;


    cout<<c<<endl;
    cout<<b<<endl;

    return 0;
}
