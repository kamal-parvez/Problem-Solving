#include<bits/stdc++.h>
using namespace std;

int dp[46];

int total_way(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    if(dp[n] == -1){
        dp[n] = total_way(n-1) + total_way(n-2);
    }

    return dp[n];
}

int  main(){
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));

    cout<<total_way(n)<<endl;

    return 0;
}


