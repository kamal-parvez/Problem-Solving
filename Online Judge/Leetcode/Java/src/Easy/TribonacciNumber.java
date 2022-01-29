package Easy;
import java.util.Arrays;

// LeetCode Problem No 1137
// N - th Tribonacci Number


public class TribonacciNumber {
    public int dp[];

    public TribonacciNumber() {
    }

    public int tribonacci(int n) {
        dp = new int[38];
        Arrays.fill(dp, -1);
        //System.out.println(dp[0]);
        return getTribonacci(n);
    }

    int getTribonacci(int n){
        if(n == 0){
            return 0;
        }
        else if(n == 1 || n == 2){
            return 1;
        }

        if(dp[n] == -1){
            dp[n] = getTribonacci(n-1) + getTribonacci(n-2) + getTribonacci(n-3);
        }

        return dp[n];
    }
}
