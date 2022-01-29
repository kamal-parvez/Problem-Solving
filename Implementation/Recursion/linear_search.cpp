#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int linear(int a[],int n,int k)
{
    if(n==0)
        return -1;
    if(a[n-1]==k)
        return n-1;
    int x=linear(a,n-1,k);

        return x;
}

int main()
{
    int ara[1000],i,n,k;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    cin>>k;

    cout<<linear(ara,n,k)<<endl;

    return 0;
}

