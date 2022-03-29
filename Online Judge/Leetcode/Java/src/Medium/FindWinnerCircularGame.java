package Medium;

//leetcode - 1823. Find the Winner of the Circular Game

import java.util.Arrays;

public class FindWinnerCircularGame {

    
    public int findTheWinner(int n, int k) {
        Node one = new Node(1);
        Node prev = one;

        for(int i=2; i<=n; i++){
            Node node = new Node(i);
            prev.right = node;
            prev = node;
        }
        prev.right = one;

        int person = n;
        int count;
        Node cur = one;
        
        while (person != 1){
            count = 0;

            while (count != k-1){
                cur = cur.right;
            }
            //done

        }

        int res = 0;
        
        return res;
    }

    public class Node{
        int val;
        Node right;

        Node(){}

        Node(int val){
            this.val = val;
        }

        Node(int val, Node right){
            this.val = val;
            this.right = right;
        }
    }
    
}
