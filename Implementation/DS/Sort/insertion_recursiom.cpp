#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion_aux(int ara[],int n,int i)
{
    if(i<0)
        return;
    if(ara[i]>ara[n])
        swap(ara[i],ara[n]);
    insertion_aux(ara,n,i-1);
}

void insertion(int ara[],int n)
{
    if(n<0)
        return;
    insertion_aux(ara,n,n-1);
    insertion(ara,n-1);

}

int main()
{
    int num[1000];
    int i,j,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>num[i];

    insertion(num,n-1);

    for(i=0;i<n;i++)
        cout<<num[i]<<" ";

    return 0;
}
