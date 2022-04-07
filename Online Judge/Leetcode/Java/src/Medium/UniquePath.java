package Medium;


//leetcode - 62. Unique Paths

import java.util.Arrays;

public class UniquePath {

    int m;
    int n;
    int[][] dp;
    int emptyValue = -1;

    public int uniquePaths(int m, int n) {
        this.m = m;
        this.n = n;
        dp = new int[m][n];
        for(int i=0; i<m; i++){
            Arrays.fill(dp[i], emptyValue);
        }

        return getWay(0, 0);
    }

    int getWay(int i, int j){

        if(i == m-1 && j == n-1) return 1;
        if(i >= m || j >= n) return 0;

        if(dp[i][j] == emptyValue){
            dp[i][j] = getWay(i, j+1) + getWay(i+1, j);
        }

        return dp[i][j];
    }
}
