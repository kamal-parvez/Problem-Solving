#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int lo,int hi,int k)
{
    if(lo>hi)
        return -1;
    int mid=(lo+hi)/2;
    if(a[mid]==k)
        return mid;
    else if(k>a[mid])
        return binary_search(a,mid+1,hi,k);
    else
        return binary_search(a,lo,mid-1,k);
}

int main()
{
    int ara[1000],i,n,k;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    cin>>k;

    cout<<binary_search(ara,0,n-1,k)<<endl;

    return 0;
}

