#include<iostream>
using namespace std;

#define MAX(a,b) (a>b? a : b)

int main()
{
    int a=200,b=100;
    double c=39.90,d=400.6;

    cout<<"Maximum of "<<a<<" and "<<b<<" is "<<MAX(a,b)<<endl;
    cout<<"Maximum of "<<c<<" and "<<d<<" is "<<MAX(c,d)<<endl;
    cout<<"Maximum of "<<a<<" and "<<d<<" is "<<MAX(a,d)<<endl;
}
