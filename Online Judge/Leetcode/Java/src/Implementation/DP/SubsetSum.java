package Implementation.DP;

import java.util.Arrays;


// coin array is given. in how many ways we may get amount?

public class SubsetSum {

    int[] coin;
    int l;
    int[][] dp;
    int emptyValue = -1;

    public int getWay(int[] coin, int amount){
        l = coin.length;
        this.coin = coin;
        dp = new int[l][amount+1];
        for(int i=0; i<l; i++){
            Arrays.fill(dp[i], emptyValue);
        }

        return fun(0, amount);
    }

    public int fun(int i, int amount){
        if(amount == 0) return 1;
        if(i == l || amount < 0) return 0;



        if(dp[i][amount] == emptyValue){
            dp[i][amount] = fun(i+1, amount - coin[i]) + fun(i+1, amount);
        }

        return dp[i][amount];
    }
}
