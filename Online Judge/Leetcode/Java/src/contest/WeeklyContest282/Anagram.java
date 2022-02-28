package contest.WeeklyContest282;

import java.util.Arrays;

public class Anagram {
    public int minSteps(String s, String t) {
        int lengthS = s.length();
        int lengthT = t.length();
        int[] countS = new int[26];
        int[] countT = new int[26];

        Arrays.fill(countS,0);
        Arrays.fill(countT,0);
        int index;

        for(int i=0; i<lengthS; i++){
            index = (int) (s.charAt(i) - 'a');
            countS[index]++;
        }

        for(int i=0; i<lengthT; i++){
            index = (int) (t.charAt(i) - 'a');
            countT[index]++;
        }

        int res = 0;

        for(int i=0; i<26; i++){
            res += Math.abs(countS[i] - countT[i]);
        }

        return res;
    }
}
