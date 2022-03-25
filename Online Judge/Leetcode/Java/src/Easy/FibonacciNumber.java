package Easy;

//Leetcode - 509. Fibonacci Number

import java.util.Arrays;

public class FibonacciNumber {

    int[] dp;

    public int fib(int n) {
        dp = new int[n+1];
        Arrays.fill(dp, -1);

        return recFun(n);
    }

    int recFun(int x){
        if(x == 0) return 0;
        if(x == 1) return 1;

        if(dp[x] == -1){
            dp[x] = recFun(x-1) + recFun(x-2);
        }

        return dp[x];
    }
}
