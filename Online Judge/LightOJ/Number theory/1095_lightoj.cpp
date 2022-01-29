#include<bits/stdc++.h>
using namespace std;

int k,m;


int dearrange(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
    {
        int x = dearrange(n-1)%1000000007;
        int y = dearrange(n-2)%1000000007;

        return (n-1)*(x+y);
    }
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1))%1000000007;
}

int com(int n,int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    int x = com(n-1,r);
    int y = com(n-1,r-1);

    return x+y;
}


int main()
{
    int t,i,n,a,b,c,x;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n>>m>>k;

        c = com(m,k);
        x = dearrange(n-k);
        a = fact(n-m);

        int res = x*a*c;

        cout<<c<<" "<<x<<" "<<a<<endl;

        cout<<"Case "<<i<<": "<<res<<endl;
    }

    return 0;
}
