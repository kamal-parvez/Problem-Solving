#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble(int ara[],int n)
{
    int *lo=malloc(int);
    *lo=0;
    if(n==1)
        return;
    if(*lo>n)
        return;

    if(ara[n-1]<ara[n-2])
        swap(ara[n-1],ara[n-2]);
    bubble(ara,n-1);
    (*lo)++;
    bubble(ara,n);


}

int main()
{
    int ara[1000],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    bubble(ara,n);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";

    return 0;
}



