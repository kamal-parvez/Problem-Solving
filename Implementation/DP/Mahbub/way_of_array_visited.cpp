#include<bits/stdc++.h>
using namespace std;

int dp[100];
int visited[100];

int way(int n)
{
    if(n<2)
        return 1;
    if(visited[n]==1)
        return dp[n];
    else
    {
        dp[n] = way(n-1) + way(n-2);
        visited[n]=1;
        return dp[n];
    }
}

int main()
{
    int n;
    cin>>n;

    memset(visited,0,sizeof(visited));

    cout<<"The way is : "<<way(n)<<endl;

    return 0;
}

