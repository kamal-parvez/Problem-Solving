#include<bits/stdc++.h>
using namespace std;

int nums[] = {2,7,9,3,1};
int x = 4;
int dp[101];





int money(int x){
    if(x == 0){
        return nums[0];
    }
    else if(x == 1){
        return max(nums[0], nums[1]);
    }

    if(dp[x-1] == -1){
        dp[x-1] = money(x-1);
    }
    if(dp[x-2] == -1){
        dp[x-2] = money(x-2);
    }

    return dp[x] = max(dp[x-1], dp[x-2] + nums[x]);

}

int rob() {
    memset(dp, -1, sizeof(dp));
    return money(x);
}


int main(){
    cout<<rob()<<endl;
}
