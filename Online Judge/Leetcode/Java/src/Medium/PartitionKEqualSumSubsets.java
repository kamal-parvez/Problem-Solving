package Medium;


// Leetcode - 698. Partition to K Equal Sum Subsets

import java.util.Arrays;

public class PartitionKEqualSumSubsets {

    int n;
    int[] nums;
    int[][] dp;
    int empty = -1;
    int inf = 99999999;

    public boolean canPartitionKSubsets(int[] nums, int k) {
        n = nums.length;
        this.nums = nums;
        int sum = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        boolean flag = true;
        System.out.println("sum : " + sum);
        System.out.println(Arrays.toString(nums));

        if(sum % k == 0){
            dp = new int[n][sum/k +1];

           for(int j=0; j<k; j++){
               for(int i=0; i<n; i++){
                   Arrays.fill(dp[i], empty);
               }
               if(fun(0, sum/k) == 0){
                   flag = false;
                   System.out.println(Arrays.toString(nums));
                   break;
               }
               System.out.println(Arrays.toString(nums));
           }
        }
        else{
            flag = false;
        }

        return flag;
    }

    int fun(int i, int amount){

        if(amount == 0) return 1;
        else if(amount < 0 || i == n) return 0;

        if(dp[i][amount] == empty){
            for(int j=i; j<n; j++){
                if(nums[j] == inf) continue;

                if(fun(j+1, amount - nums[j]) == 1){
                    nums[j] = inf;
                    dp[i][amount] = 1;
                }
                else{
                    dp[i][amount] =  fun(i+1, amount);
                }

                break;
            }


        }

        return dp[i][amount];
    }
}
