package Medium;

import java.util.Arrays;

//Leetcode - 1663. Smallest String With A Given Numeric Value

public class SmallString {
    public String getSmallestString(int n, int k) {

        char[] res = new char[n];
        Arrays.fill(res, 'a');


        for(int i=n-1; i>=0; i--){
            if(k - i >= 26){
                res[i] = 'z';
                k -= 26;
            }
            else{
                res[i] = (char)('a' + (k-i-1));
                k -= (k-i);
            }
        }

        return new String(res);
    }
}

