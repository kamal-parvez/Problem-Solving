package Implementation.DP;

import java.util.Arrays;

public class LongestIncreasingSubsequence {

    int[] ara;
    int[] dp;
    int length;

    public int LIS(int[] ara){
        this.ara = ara;
        length = ara.length;
        dp = new int[length];
        Arrays.fill(dp, -1);

        int ans = 0;

        for(int i=0; i<length; i++){
            ans = Math.max(ans, fun(i));
        }

        return ans;
    }

    int fun(int i){

        if(dp[i] != -1){
            int ans = 0;
            for(int j=i+1; j<length; j++){
                if(ara[j] > ara[i]){
                    ans = Math.max(ans, fun(j));
                }
            }
            dp[i] = 1 + ans;
        }

        return dp[i];
    }
}
