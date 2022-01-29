#include<iostream>
using namespace std;

int dp[100][100];

int com(int n,int r)
{
    if(n==r)
        return 1;
    else if(r==1)
        return n;

    else if(dp[n][r]!=0)
        return dp[n][r];
    else
    {
        dp[n][r]=com(n-1,r-1)+com(n-1,r);
        return dp[n][r];
    }
}

int main()
{
    int n,r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;

    cout<<"nCr = "<<com(n,r)<<endl;

    return 0;
}
