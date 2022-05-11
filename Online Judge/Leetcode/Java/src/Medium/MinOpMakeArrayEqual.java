package Medium;


//leetcode - 1551. Minimum Operations to Make Array Equal

public class MinOpMakeArrayEqual {

    public int minOperations(int n) {
        int a = 1, d = 2;
        int avg = (2 * a + (n-1) * d) / 2;

        a = avg - 1;
        d = -2;
        n /= 2;
        int ans = ((2 * a + (n - 1) * d) / 2) * n ;

        return ans;
    }
}
