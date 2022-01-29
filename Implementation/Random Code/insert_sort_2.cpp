#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ara[1000];
    int i,j,n,x,temp;

     cin>>n;

     for(i=0;i<n;i++)
        cin>>ara[i];

     for(i=1;i<n;i++)
     {
         j=i-1;
         while(ara[i]<ara[j] && j>=0)
        {
            temp=ara[i];
            ara[i]=ara[j];
            ara[j]=temp;
             j--;
             i--;
         }
     }

     for(i=0;i<n;i++)
        cout<<ara[i]<<" ";

    return 0;
}
