package Medium;


//leetcode - 1561. Maximum Number of Coins You Can Get

import java.util.Arrays;

public class MaxCoinPiles {

    public int maxCoins(int[] piles) {
        int l = piles.length;
        Arrays.sort(piles);
        int ans = 0;
        for(int i=l/3; i<l; i+=2){
            ans += piles[i];
        }

        return  ans;
    }
}
