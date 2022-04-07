package Implementation.DP;

// given an array coin. is it possible to get amount from it?

import java.util.Arrays;

public class PossibleAmount {

    int[] coin;
    int l;
    int[][] dp;
    int emptyValue = -1;

    public boolean isPossible(int[] coin, int amount){
        l = coin.length;
        this.coin = coin;
        dp = new int[l][amount+1];
        for(int i=0; i<l; i++){
            Arrays.fill(dp[i], emptyValue);
        }

        if(fun(0, amount) > 0) return true;
        else return false;
    }

    public int fun(int i, int amount){
        if(amount == 0) return 1;
        if(amount < 0 || i == l) return 0;

        if(dp[i][amount] == emptyValue){
            dp[i][amount] = fun(i+1, amount - coin[i]) + fun(i+1, amount);
        }

        return dp[i][amount];
    }

}
