package Easy;

//Leetcode - 392. Is Subsequence

public class Subsequence {
    public boolean isSubsequence(String s, String t) {
        int sLength = s.length();
        int tLength = t.length();
        boolean res = false;

        for(int i=0, j=0; i<tLength && j<sLength; i++){
            if(s.charAt(j) == t.charAt(i)){
                j++;
            }
            if(j == sLength){
                res = true;
                break;
            }
        }

        if(sLength == 0){
            res = true;
        }

        return res;
    }

}
