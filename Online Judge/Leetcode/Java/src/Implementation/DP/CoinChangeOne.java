package Implementation.DP;

import java.util.Arrays;

public class CoinChangeOne {

    int l;
    int[] coin;
    int[][] dp;
    int inf = 9999999;

    public int getMinCoin(int[] coin, int w){
        l = coin.length;
        this.coin = coin;
        dp = new int[l][w+1];
        for(int i=0; i<l; i++){
            Arrays.fill(dp[i], -1);
        }

        return recFun(0, w);
    }

    public int recFun(int i, int w){
        if(w < 0) return inf;
        if(i == l){
            if(w == 0)return 0;
            else return inf;
        }


        if(dp[i][w] == -1){
            dp[i][w] = Math.min(1 + recFun(i+1, w-coin[i]), recFun(i+1, w));
        }

        return dp[i][w];
    }
}
