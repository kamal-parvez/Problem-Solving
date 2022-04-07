package Medium;


//leetcode - 983. Minimum Cost For Tickets

import java.util.Arrays;

public class MinCostForTickets {
    int[] days;
    int[] costs;
    int l;
    int[] dp;
    int inf = 99999999;
    int costSize = 3;
    int[] time = {1, 7, 30};

    public int mincostTickets(int[] days, int[] costs) {
        this.days = days;
        this.costs = costs;
        l = days.length;
        dp = new int[l];
        Arrays.fill(dp, -1);

        return getCost(0);
    }

    int getCost(int i){

        if(i >= l) return 0;

        if(dp[i] == -1){
            int ans = inf;
            for(int j=0; j<costSize; j++){
                int k = i;
                while(k<l && days[i] + time[j] - 1 >= days[k]){
                    k++;
                }
                ans = Math.min(ans, costs[j] + getCost(k));
            }
            dp[i] = ans;
        }

        return dp[i];
    }

}
