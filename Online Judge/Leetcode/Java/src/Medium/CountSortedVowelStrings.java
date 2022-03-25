package Medium;

import java.util.Arrays;


//leetcode - 1641. Count Sorted Vowel Strings

public class CountSortedVowelStrings {
    int[] dp;
    char[] vowel = {'a', 'e', 'i', 'o', 'u'};
    int vowelSize = 5;
    char[] str;
    int length;

    public int countVowelStrings(int n) {
        dp = new int[n+1];
        Arrays.fill(dp, -1);
        str = new char[n];
        length = n;
        return recFun(0);

    }

    int recFun(int x){

        if(x >= length){
            return 1;
        }

//        if(dp[x] == -1){
        int count = 0;

        for(int i=0; i<vowelSize; i++){
            if(x == 0  || (x > 0 && vowel[i] >= str[x-1])){
                str[x] = vowel[i];
                count += recFun(x+1);
            }
        }
        dp[x] = Math.max(dp[x], count);
        System.out.println("x: " + x + "  count: " + count);
//        }

        return dp[x];
    }
}

