#include<iostream>
using namespace std;

void dtob(int n)
{
    if(n==0)
        return;
    int a=n%2;
    dtob(n/2);
    cout<<a;
}

int main()
{
    int n;
    cin>>n;
    dtob(n);
    return 0;
}
