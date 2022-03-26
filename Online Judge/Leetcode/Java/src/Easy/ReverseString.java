package Easy;


//Leetcode - 344. Reverse String (Recursion)

import java.util.Collection;
import java.util.Collections;

public class ReverseString {

    public void reverseString(char[] s) {
        int lenth = s.length;
        recFunc(s, 0, lenth -1);
    }

    public void recFunc(char[] str, int i, int j){
        if(i > j) return;

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        recFunc(str, i+1, j-1);
    }
}
