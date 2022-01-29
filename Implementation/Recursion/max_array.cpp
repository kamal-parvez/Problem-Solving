#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_array(int a[],int n)
{
    if(n==1)
        return a[0];
    int x=max_array(a,n-1);
    int y=a[n-1];
    if(y<x)
        y=x;
    return y;
}


int main()
{
    int arr[100],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<max_array(arr,n)<<endl;

    return 0;
}
