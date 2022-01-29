#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    if(a%b==0)
        return b;
    int c=a%b;
    return gcd(b,c);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}

