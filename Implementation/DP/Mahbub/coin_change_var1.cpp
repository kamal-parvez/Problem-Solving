#include<bits/stdc++.h>
using namespace std;

int dp[10000];
int coin[] = {3, 5, 8};
int k;


int possible(int n){

    if(n==0){
        return 1;
    }
    else if(n<0)
        return 0;


    if(dp[n] != -1)
        return dp[n];

    int temp = 0;

    for(int i=0; i<k; i++){
        temp |= possible(n-coin[i]);
    }

    return dp[n] = temp;
}

int main(){

    k = 3;
    int n;

    cin>>n;

    memset(dp, -1, sizeof(dp));
    cout<<"The possible : "<<possible(n)<<endl;

    return 0;
}

