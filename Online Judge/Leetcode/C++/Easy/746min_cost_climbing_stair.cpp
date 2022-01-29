#include<bits/stdc++.h>
using namespace std;

int cost[] = {1,100,1,1,1,100,1,1,100,1};
int x = 10;
int dp[1001];

int costCalculate(int n){

    if(n >= x){
        return 0;
    }

    if(dp[n] == -1){
        dp[n] = min(costCalculate(n+1), costCalculate(n+2)) + cost[n];
    }

    return dp[n];
}


int minCostClimbingStairs() {
    memset(dp, -1, sizeof(dp));
    int res1 = costCalculate(0);
    //printf("res1 : %d\n", res1);

    memset(dp, -1, sizeof(dp));

    int res2 = costCalculate(1);
    //printf("res2 : %d\n", res2);
    return min(res1, res2);
}


int main(){
    cout<<minCostClimbingStairs()<<endl;
}

