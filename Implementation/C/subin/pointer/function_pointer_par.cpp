#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int oper(int (*fun)(int,int),int c,int d)
{
    return fun(c,d);
}


int main()
{
    int a=20,b=10;

    cout<<oper(&add,a,b)<<endl;
    cout<<oper(sub,a,b)<<endl;

    int ara[]={3,1,7,4,9,3};

    sort(ara,ara+6);

    for(int i=0;i<6;i++)
        cout<<ara[i]<<" ";
}
