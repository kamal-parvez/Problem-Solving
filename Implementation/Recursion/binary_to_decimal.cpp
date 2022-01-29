#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int con(int n,int x)
{
    if(n==0)
        return 0;
    int a=n%10;
    int b=a*pow(2,x);
    int c=con(n/10,x+1);
    return b+c;
}


int main()
{
    int n;
    cin>>n;
    cout<<con(n,0)<<endl;

    return 0;
}
