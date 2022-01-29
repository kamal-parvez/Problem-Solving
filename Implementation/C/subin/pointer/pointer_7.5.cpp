#include<iostream>
using namespace std;

int main()
{
    int ara[]={100,300,500,700,900};
    int *p;
    p=ara;

    cout<<*p<<endl;
    cout<<*p+1<<endl;
    cout<<*(p+1)<<endl;
    cout<<*p+2<<endl;
    cout<<*(p+2)<<endl;

    return 0;
}
