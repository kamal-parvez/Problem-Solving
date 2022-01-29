#include<stdio.h>

int dp[20];

int Fib(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    else
    {
        dp[n]=Fib(n-1) + Fib(n-2);
        return dp[n];
    }
}

int main()
{

    int i;
    for(i=0;i<20;i++)
        dp[i]=-1;
    int t=Fib(5);
    printf("%d\n",t);
    return 0;
}
