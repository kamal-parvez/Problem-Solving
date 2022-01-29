package Medium;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.regex.Pattern;

// Leetcode - Problem No. 211
// Design Add and Search Words Data Structure
//Naive Approach


public class WordDictionaryNaive {
    ArrayList <String> arrayList;

    public WordDictionaryNaive() {
        arrayList = new ArrayList<>();
    }

    public void addWord(String word) {
        arrayList.add(word);
    }

    public boolean search(String word) {
        Iterator itr = arrayList.iterator();

        while(itr.hasNext()){
            if(Pattern.matches(word, (CharSequence) itr.next())){
                return true;
            }
        }

        return  false;
    }

}
