#include<bits/stdc++.h>
using namespace std;

int nums[] = {-5,-3,-3,-2,7,1};
int n = 6;
int multipliers[] = {-10,-5,3,4,6};
int m = 5;
int dp[1000][1000];


int getScore(int x, int left){

    if(x == m){
        return 0;
    }

    int right = n - 1 - (x - left);

    if(left == right){
        return nums[left] * multipliers[x];
    }

    if(dp[x][left] == -1){
        int res1 = nums[left] * multipliers[x] + getScore(x+1, left+1);
        //printf("res1 : %d\n", res1);
        int res2 = nums[right] * multipliers[x] + getScore(x+1, left);
        //printf("res2 : %d\n", res2);
        dp[x][left] = max(res1, res2);
    }

    return dp[x][left];
}


int main(){
    memset(dp, -1, sizeof(dp));
    cout<<getScore(0, 0);
    return 0;
}
