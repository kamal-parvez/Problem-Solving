
import Easy.PascalTriangle;
import Easy.PowerOfTwo;
import Medium.*;
import contest.WeeklyContest286.Beautiful;
import contest.WeeklyContest286.NewClass;
import contest.WeeklyContest286.Palindrome;
import contest.biweeklyContest75.Contest;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {

    public static void main(String[] args) {
//        Trie trie = new Trie();
//        Scanner scanner = new Scanner(System.in);
//        while(true){
//            System.out.println("Choose Options:  1 for insert, 2 for search");
//            int option = scanner.nextInt();
//            String word = scanner.next();
//
//            if(option == 1){
//                trie.insert(word);
//                System.out.println(word + " is added successfully");
//            }
//            else if(option == 2){
//                boolean isFound = trie.search(word);
//                System.out.println(word + " found : " + isFound);
//            }
//
//        }

        int ara[] =  {31,119983340,494857782,48,904409366,65626832,610586467}; //{96,44,99,25,61,84,88,18,19,33,60,86,52,19,32,47,35,50,94,17,29,98,22,21,72,100,40,84};
        int[][] pair = {{1,2},{2,3},{3,4}};
        System.out.println(new MaximumLengthOfPairChain().findLongestChain(pair));
        String str = "0011";



    }
}


