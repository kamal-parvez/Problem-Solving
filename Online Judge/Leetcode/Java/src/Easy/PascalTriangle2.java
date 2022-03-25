package Easy;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalTriangle2 {

    int[][] dp;

    public List<Integer> getRow(int rowIndex) {
        dp = new int[rowIndex+1][rowIndex+1];
        for(int i=0; i<=rowIndex; i++){
            Arrays.fill(dp[i], -1);
        }

        List<Integer> list = new ArrayList<>();

        for(int i=0; i<=rowIndex; i++){
            list.add(nCr(rowIndex, i));
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
