#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector < int > ara;

    int x,i;

    for(i=0;i<5;i++)
    {
        cin>>x;
        ara.push_back(x);
    }

    for(i=0;i<5;i++)
        cout<<ara[i]<<" ";
    return 0;
}
