#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    int l,s,i;

    cin>>str;

    int a[200];
    memset(a,0,sizeof(a));

    for(i=0;str[i];i++)
    {
        a[str[i]]++;
    }
    for(i=97;i<=122;i++)
    {
        if(a[i]>0)
            s++;
    }

    if(s%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
