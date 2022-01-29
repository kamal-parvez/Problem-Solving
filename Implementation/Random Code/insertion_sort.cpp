#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int num[1000];
    int i,j,x;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>num[i];

    for(i=1;i<n;i++)
    {
        x=num[i];
        j=i-1;

        while(x<num[j] && j>=0)
        {
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=x;
    }

    for(i=0;i<n;i++)
        cout<<num[i]<<" ";

    return 0;
}
