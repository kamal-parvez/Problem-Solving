package contest.WeeklyContest286;

public class Palindrome {

    public long[] kthPalindrome(int[] queries, int intLength) {

        int l = queries.length;
        long[] ans = new long[l];
        int temp = (int) Math.ceil(intLength / 2) - 1 ;
        int maxPos = 9 *  temp * 10;

        for(int i=0; i<l; i++){
            if(queries[i] > maxPos){
                ans[i] = -1;
            }
            else{
                ans[i] = fun(intLength, queries[i]);
            }
        }

        return ans;
    }

    long fun(int l, int num){
        long temp = 0;
        String str = "";
        int rem;

        for(int i=0; i<l; i++){
            
        }
        
        return temp;
    }
}
