package Easy;


//Leetcode - 1025. Divisor Game

import java.util.Arrays;

public class DivisorGame {
    int[] dp;

    public boolean divisorGame(int n) {
        dp = new int[n+1];
        Arrays.fill(dp, -1);

        if(recFun(n) == 1){
            return true;
        }
        else{
            return false;
        }
    }

    int recFun(int n){
        if(n == 1) return 0;
        if(n == 2) return 1;

        if(dp[n] == -1){
            int temp = (int) Math.sqrt(n);
            int res = 0;
            for(int i=1; i<=temp; i++){
                if(n % i == 0 && recFun(n - i) == 0){
                    res = 1;
                    break;
                }
            }

            dp[n] = res;
        }

        return dp[n];

    }
}
