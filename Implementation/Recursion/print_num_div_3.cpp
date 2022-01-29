#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int ara[],int n)
{
    if(n==0)
        return;
    fun(ara,n-1);
    if(ara[n-1]%3==0)
        cout<<ara[n-1]<<" ";
}


int main()
{
    int ara[1000],n,i;
    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    fun(ara,n);
    return 0;
}
