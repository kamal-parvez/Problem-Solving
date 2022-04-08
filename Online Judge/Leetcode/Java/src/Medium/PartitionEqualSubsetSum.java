package Medium;

//leetcode - 416. Partition Equal Subset Sum

import java.util.Arrays;

public class PartitionEqualSubsetSum {

    int[] nums;
    int l;
    int[][] dp;
    int emptyValue = -1;

    public boolean canPartition(int[] nums) {
        this.nums = nums;
        l = nums.length;
        int sum = 0;
        for(int i=0; i<l; i++){
            sum += nums[i];
        }

        if(sum % 2 == 0){
            dp = new int[l][sum/2 + 1];
            for(int i=0; i<l; i++){
                Arrays.fill(dp[i], emptyValue);
            }
            if(fun(0, sum/2) == 1) return true;
            else return false;
        }
        else return false;
    }

    int fun(int i, int amount){

        if(amount == 0) return 1;
        if(amount < 0 || i == l) return 0;

        if(dp[i][amount] == emptyValue){
            dp[i][amount] = fun(i+1, amount - nums[i]) | fun(i+1, amount);
        }
        return dp[i][amount];
    }
}
