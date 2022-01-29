#include<bits/stdc++.h>
using namespace std;

long long int dp[10000];


long long int way(int n){

    if(n==0 || n==1){
        return 1;
    }

    if(dp[n] != -1)
        return dp[n];

    return dp[n] = way(n-1) + way(n-2);
}

int main(){
    int n;
    cin>>n;

    memset(dp, -1, sizeof(dp));
    cout<<"The way : "<<way(n)<<endl;

    return 0;
}
