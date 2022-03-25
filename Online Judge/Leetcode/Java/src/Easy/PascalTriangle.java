package Easy;


//Leetcode - 118. Pascal's Triangle

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalTriangle {

    int[][] dp;

    public List<List<Integer>> generate(int numRows) {
        dp = new int[numRows+1][numRows+1];
        for(int i=0; i<=numRows; i++){
            Arrays.fill(dp[i], -1);
        }

        List<List<Integer>> list = new ArrayList<>();

        for(int i=0; i<numRows; i++){
            List<Integer> temp = new ArrayList<>();

            for(int j=0; j<=i; j++){
                temp.add(nCr(i, j));
            }
            list.add(temp);
        }

        return list;
    }

    int nCr(int n, int r){
        if(r == 0 || r == n) return 1;
        if(r == 1) return n;

        if(dp[n][r] == -1){
            dp[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
        }

        return dp[n][r];
    }
}
