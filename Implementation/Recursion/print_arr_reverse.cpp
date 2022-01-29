#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void fun(int ara[],int n)
{
    if(n==0)
        return;
    cout<<ara[n-1]<<" ";
    fun(ara,n-1);
}


int main()
{
    int ara[1000],n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    fun(ara,n);
    return 0;
}
