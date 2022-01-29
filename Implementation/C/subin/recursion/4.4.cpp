#include<iostream>
using namespace std;


void fu()
{
    int a=10;
    static int b=10;

    a+=10;
    b+=10;

    cout<<a<<" "<<b<<endl;
}

int main()
{
    fu();
    fu();
    fu();


    return  0;
}
