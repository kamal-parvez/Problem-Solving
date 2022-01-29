#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num[1000];
    int i,j,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>num[i];

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
                swap(num[i],num[j]);
        }
    }

    for(i=0;i<n;i++)
        cout<<num[i]<<" ";

    return 0;
}
