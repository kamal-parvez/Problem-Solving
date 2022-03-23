package Easy;

//Leetcode - 338. Counting Bits

public class CountingBits {
    public int[] countBits(int n) {
        int[] res = new int[n+1];

        for(int i=0; i<=n; i++){
            res[i] = Integer.bitCount(i);
        }

        return res;
    }
}

