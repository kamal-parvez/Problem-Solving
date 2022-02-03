package Medium;

//LeetCode - 322 Coin Change


import java.util.Arrays;

public class CoinChange {
    int dp[];
    int length;
    int coins[];
    int inf = 99999999;

    public int coinChange(int[] coins, int amount) {
        length = coins.length;
        this.coins = coins;
        dp = new int[amount+1];
        Arrays.fill(dp, -1);
        Arrays.sort(coins);
        System.out.println(Arrays.toString(coins));

        int minCoin = recFun(amount);
        if(minCoin == inf){
            return -1;
        }

        return minCoin;
    }

    int recFun(int amount){
        //Base Case
        if(amount == 0){
            return 0;
        }
        if(amount < 0) {
            return inf;
        }

        if(dp[amount] == -1){
            int minCoin = inf;
            for(int i=0; i<length; i++){
                minCoin = Math.min(minCoin, 1 + recFun(amount - coins[i]));
            }
            dp[amount] = minCoin;
        }

        return dp[amount];
    }
}
