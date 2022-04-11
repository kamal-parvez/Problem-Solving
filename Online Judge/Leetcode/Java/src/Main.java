import Hard.BurstBalloons;
import Implementation.DP.MatrixChainMultiplication;
import Medium.PartitionKEqualSumSubsets;

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

        int[] ara = {4,4,4,6,1,2,2,9,4,6};
        System.out.println(new PartitionKEqualSumSubsets().canPartitionKSubsets(ara, 3));

    }
}



//[4,4,4,6,1,2,2,9,4,6]
 //       3


