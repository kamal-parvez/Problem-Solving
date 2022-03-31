package Implementation.DP;


// find shortest path from node 0 to n-1 (Shafayet blog)

import java.util.Arrays;

public class ShortestPath {
    int node;
    int[][] cost;
    int[] dp;

    public int getShortestPath(int[][] cost){
        node = cost.length;
        this.cost = cost;
        dp = new int[node];
        Arrays.fill(dp, -1);

        return fun(0);
    }

    public int fun(int u){
        if(u == node - 1){
            return 0;
        }

        if(dp[u] != -1){
            int ans = Integer.MAX_VALUE;

            for(int i=0; i<node; i++){
                if(cost[u][i] != 0){
                    ans = Math.min(ans, cost[u][i] + fun(i));
                }
            }
            dp[u] = ans;
        }

        return dp[u];
    }


}
