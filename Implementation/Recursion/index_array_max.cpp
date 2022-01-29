#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int index(int a[],int n)
{
    if(n==1)
        return 0;
    int x=index(a,n-1);
    int y=a[n-1];
    if(a[x]>y)
        return x;
    else
        return n-1;
}

int main()
{
    int ara[1000],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    cout<<index(ara,n)<<endl;

    return 0;
}
