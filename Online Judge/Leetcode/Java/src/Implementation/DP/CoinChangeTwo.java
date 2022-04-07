package Implementation.DP;

//use a coin for infinity times to make an amount

import java.lang.reflect.Array;
import java.util.Arrays;

public class CoinChangeTwo {
    int[] coin;
    int l;
    int[][] dp;
    int inf = 999999;

    public int getCoin(int[] coin, int w){
        l = coin.length;
        this.coin = coin;
        dp = new int[l][w+1];
        for(int i=0; i<l; i++){
            Arrays.fill(dp[i], -1);
        }

        return recFun(0, w);
    }

    public int recFun(int i, int amount){
        if(amount < 0) return inf;
        if(i == l){
            if(amount == 0) return 0;
            else return inf;
        }

        if(dp[i][amount] == -1){
            dp[i][amount] = Math.min(1 + recFun(i, amount-coin[i]), recFun(i+1, amount));
        }

        return dp[i][amount];
    }
}
