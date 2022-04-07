package Implementation.DP;

import java.util.Arrays;

//use a coin for infinity time. reduced memory space

public class CoinChangeThree {
    int[] coin;
    int l;
    int[] dp;
    int inf = 9999999;

    public int getCoin(int[] coin, int amount){
        this.coin = coin;
        l = coin.length;
        dp = new int[amount+1];
        Arrays.fill(dp, -1);

        return recFun(amount);
    }

    public int recFun(int amount){

        if(amount == 0) return 0;
        if(amount < 0) return inf;

        if(dp[amount] == -1){
            int ans = inf;
            for(int i=0; i<l; i++){
                ans = Math.min(ans, 1 + recFun(amount-coin[i]));
            }
            dp[amount] = ans;
        }

        return dp[amount];
    }
}
