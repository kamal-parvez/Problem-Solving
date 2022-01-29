#include<iostream>
using namespace std;


int main()
{
    int n,t,i,a=0,b;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n>10)
        {
             a=n-10;
             b=10;
        }
        else
        {
            a=0;
            b=n;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
