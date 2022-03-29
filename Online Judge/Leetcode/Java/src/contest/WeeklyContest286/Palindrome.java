package contest.WeeklyContest286;

import java.util.Arrays;

public class Palindrome {

    public long[] kthPalindrome(int[] queries, int intLength) {

        int l = queries.length;
        long[] ans = new long[l];
        int temp = (int) Math.ceil(intLength / 2.0) - 1 ;
        int maxPos = (int) (9 * Math.pow(10, temp));
        //System.out.println("maxPos : " + maxPos);

        for(int i=0; i<l; i++){
            if(queries[i] > maxPos){
                ans[i] = -1;
            }
            else{
                ans[i] = fun(intLength, queries[i]-1);
            }
        }

        return ans;
    }

    long fun(int intLength, int num){
        char[] str = new char[intLength+1];
        int rem;
        int mid = (int) Math.ceil(intLength / 2.0);
        char start = '0';

        for(int i=0; i<mid; i++){
            rem = num % 10;
            num /= 10;

            if(i != mid - 1) start = '1';

            if(intLength % 2 == 0){
                str[mid-i] = (char) (start + rem);
                str[mid+1+ i] = (char) (start + rem);
            }
            else {
                str[mid - i] = (char) (start + rem);
                str[mid + i] = (char) (start + rem);
            }
        }
        //System.out.println(Arrays.toString(str));
        return  Long.parseLong(String.valueOf(Arrays.copyOfRange(str, 1, intLength+1)));
    }
}
