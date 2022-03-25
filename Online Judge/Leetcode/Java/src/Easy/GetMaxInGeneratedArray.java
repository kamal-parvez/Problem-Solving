package Easy;

//leetcode - 1646. Get Maximum in Generated Array

import java.util.Arrays;

public class GetMaxInGeneratedArray {

    int[] dp;

    public int getMaximumGenerated(int n) {
        dp = new int[n+1];
        Arrays.fill(dp, -1);
        int max = Integer.MIN_VALUE;

        for(int i=0; i<=n; i++){
            max = Math.max(max, recFun(i));
        }

        return max;
    }

    int recFun(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;

        if(dp[n] == -1){
            if(n % 2 == 0){
                dp[n] = recFun(n/2);
            }
            else{
                dp[n] = recFun((n-1)/2) + recFun((n-1)/2 + 1);
            }
        }

        return dp[n];
    }
}
