#include<bits/stdc++.h>
using namespace std;

int nums[] = {2,2,3,3,3,4};
int x = 6;
int dp[20001];

int recFun(int n){

    if(n < 0){
        return 0;
    }

    if(dp[n] == -1){

        //take the index n
        int earn = nums[n];
        int nextIndex = -1;
        for(int i=n; i>0; i--){
            if(nums[i-1] == nums[n]){
                earn += nums[i-1];
            }
            else if(nums[i-1] < nums[n]-1){
                nextIndex = i-1;
                break;
            }
        }

        int res1 = earn + recFun(nextIndex);
        printf("Res1 : %d   n: %d\n", res1, n);

        //Not taking the index n
        nextIndex = -1;
        for(int i=n; i>0; i--){
            if(nums[i-1] == nums[n] - 1){
                nextIndex = i-1;
                break;
            }
        }
        int res2 = recFun(nextIndex);
        printf("Res1 : %d   n: %d\n", res1, n);
        dp[n] = max(res1, res2);
    }

    return dp[n];
}


int deleteAndEarn() {
    memset(dp, -1, sizeof(dp));
    sort(nums, nums+x);
    return recFun(x-1);
}


int main(){
    cout<<deleteAndEarn()<<endl;
}


