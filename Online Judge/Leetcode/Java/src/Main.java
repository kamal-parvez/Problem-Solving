
import Easy.AddDigits;
import Hard.MergeKSortedList;
import Implementation.Pyramid;
import Medium.DiffPair;
import Medium.FourSumTwo;

import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack;

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

        int[] nums = {6,7,3,6,4,6,3,5,6,9};
        int k = 4;
        System.out.println(k+"-diff pair: " + new DiffPair().findPairs(nums, k));

    }
}


