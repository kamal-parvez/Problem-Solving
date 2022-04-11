package Implementation.DP;

import java.util.Arrays;

public class TSPwithBitmask {

    int n;
    int[][] cost;
    int[][] dp;

    int getPath(int[][] cost){
        n = cost.length;
        this.cost = cost;
        dp = new int[n][1<<n];
        for(int i=0; i<n; i++){
            Arrays.fill(dp[i], -1);
        }

        return fun(0, 0);
    }

    int fun(int i, int mask){

        if(mask == (1 << n) - 1) return cost[i][0];

        if(dp[i][mask] == -1){
            int ans = Integer.MAX_VALUE;
            for(int j=0; j<n; j++){
                if(cost[i][j] != -1 && isOn(mask, j) == false) {
                    ans = Math.min(ans, cost[i][j] + fun(j, turnOn(mask, j)));
                }
            }
            dp[i][mask] = ans;
        }

        return dp[i][mask];
    }

    boolean isOn(int x, int pos){
        if((x & (1 << pos)) > 0)return true;
        else  return false;
    }

    int turnOn(int x, int pos){
        return x | (1 << pos);
    }
}
