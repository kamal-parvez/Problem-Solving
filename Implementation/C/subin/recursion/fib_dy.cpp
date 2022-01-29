#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int dp[100];

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    if(dp[n]!=-1)
        return dp[n];

    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;

    memset(dp,-1,sizeof(dp));

    cout<<fib(n)<<endl;

    return 0;
}
