package Medium;


//leetcode - 698. Partition to K Equal Sum Subsets

import java.util.Arrays;

public class PartitionKEqualSumSubsets {

    int n;
    int[] nums;
    int[][] dp;
    int empty = -1;

    public boolean canPartitionKSubsets(int[] nums, int k) {
        n = nums.length;
        this.nums = nums;
        int sum = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        boolean flag = false;

        if(sum % 4 == 0){
            dp = new int[n][sum/4 +1];
            for(int i=0; i<n; i++){
                Arrays.fill(dp[i], empty);
            }

            if(fun(0, sum/4) == 1) flag = true;
            else flag = false;

            for(int i=0; i<n; i++){
                System.out.println(Arrays.toString(dp[i]));
            }
        }

        return flag;
    }

    int fun(int i, int amount){

        if(amount == 0) return 1;
        if(amount < 0 || i == n) return 0;

        if(dp[i][amount] == empty){
            dp[i][amount] = fun(i+1, amount - nums[i]) | fun(i+1, amount);
        }

        return dp[i][amount];
    }
}
