#include<bits/stdc++.h>
using namespace std;

int dp[100];

int way(int n)
{
    if(n<2)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    else
    {
        dp[n] = way(n-1) + way(n-2);
        return dp[n];
    }
}

int main()
{
    int n;
    cin>>n;

    memset(dp,-1,sizeof(dp));
    cout<<"The way is : "<<way(n)<<endl;

    return 0;
}
