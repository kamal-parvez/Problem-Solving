
import Easy.PascalTriangle;
import Medium.BrokenCalculator;
import Medium.ScoreOfParentheses;

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

        int ara[] =  {1}; //{96,44,99,25,61,84,88,18,19,33,60,86,52,19,32,47,35,50,94,17,29,98,22,21,72,100,40,84};
        int k = 35;
        System.out.println(new PascalTriangle().generate(5));

    }
}


