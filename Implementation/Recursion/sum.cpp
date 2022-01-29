#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n)
{
    if(n==1)
        return a[0];
    int x=sum(a,n-1);
    int y=a[n-1];
    return x+y;
}

int main()
{
    int ara[1000],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    cout<<sum(ara,n)<<endl;

    return 0;
}

