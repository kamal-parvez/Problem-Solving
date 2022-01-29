#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int dearrangment(int n){

    if(n==1)
        return 0;
    if(n==2)
        return 1;

    if(dp[n] != -1)
        return dp[n];

    int a = (n-1)*dearrangment(n-1);
    int b = (n-1)*dearrangment(n-2);

    return dp[n] = a+b;
}

int main(){
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<"the number of dearrangement is : "<<dearrangment(n)<<endl;
    return 0;
}
