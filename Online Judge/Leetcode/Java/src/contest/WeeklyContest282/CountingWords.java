package contest.WeeklyContest282;

public class CountingWords {

    public int prefixCount(String[] words, String pref) {
        int length = words.length;
        int count = 0;

        for(int i=0; i<length; i++){
            if(words[i].startsWith(pref)){
                count++;
            }
        }

        return count;
    }
}
