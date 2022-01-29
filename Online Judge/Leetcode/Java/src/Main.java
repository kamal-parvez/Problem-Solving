import Hard.LargestRectangle;
import Implementation.Trie;

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
        int heights[] = {2,1,5,6,2,3};
        LargestRectangle largestRectangle = new LargestRectangle();
        System.out.println("Max Area : " + largestRectangle.largestRectangleArea(heights));


    }
}
