#include<iostream>
using namespace std;


int main()
{
    long long int a,b,c,t,i,d,e;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>a>>b;

        c=b-a+1;

        d=(a-1)/3;
        e=(b-1)/3;

        if((a-1)%3==0)
            d--;

        cout<<"Case "<<i<<": "<<c-(e-d)<<endl;
    }
}
