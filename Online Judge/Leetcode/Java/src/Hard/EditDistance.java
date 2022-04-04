package Hard;

//leetcode - 72. Edit Distance

import java.util.Arrays;

public class EditDistance {

    String word1;
    String word2;
    int l1;
    int l2;
    int[][] dp;

    public int minDistance(String word1, String word2) {
        l1 = word1.length();
        l2 = word2.length();
        this.word1 = word1;
        this.word2 = word2;

        dp = new int[l1][l2];
        for(int i=0; i<l1; i++){
            Arrays.fill(dp[i], -1);
        }

        return recFun(0, 0);
    }

    int recFun(int i, int j){
        if(j == l2) {
            return l1 - i;
        }
        if(i == l1){
            return l2 - j;
        }

        if(dp[i][j] == -1){
            int ans = Integer.MAX_VALUE;
            if(word1.charAt(i) == word2.charAt(j)){
                ans = recFun(i+1, j+1);
            }
            else{
                ans = Math.min(ans, 1 + recFun(i+1, j+1)); //Update
                ans = Math.min(ans, 1 + recFun(i, j+1)); //Insert
                ans = Math.min(ans, 1 + recFun(i+1, j)); //Delete
            }

            dp[i][j] = ans;
        }

        return dp[i][j];
    }
}
