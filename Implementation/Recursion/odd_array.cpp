#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int ara[],int n)
{
    if(n==0)
        return 0;
        int p=0;
    if(ara[n-1]%2!=0)
        p=1;
    int t=fun(ara,n-1);
        return p+t;

}


int main()
{
    int ara[1000],n,i;
    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    cout<<fun(ara,n)<<endl;
    return 0;
}

