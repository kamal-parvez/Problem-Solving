package Medium;


//leetcode - 300. Longest Increasing Subsequence


import java.util.Arrays;

public class LongestIncreasingSubsequence {

    int[] dp;

    public int lengthOfLIS(int[] nums) {
        int l = nums.length;
        dp = new int[l];
        Arrays.fill(dp, -1);
        int count = 1;
        for(int i=0; i<l; i++){
            count = Math.max(count, recFun(i, nums, l));
        }

        return count;
    }

    int recFun(int i, int[] nums, int l){

        if(dp[i] == -1) {
            int count = 1;
            for (int j = i + 1; j < l; j++) {
                if (nums[j] > nums[i]) {
                    count = Math.max(count, 1 + recFun(j, nums, l));
                }
            }
            dp[i] = count;
        }

        return dp[i];
    }

}
