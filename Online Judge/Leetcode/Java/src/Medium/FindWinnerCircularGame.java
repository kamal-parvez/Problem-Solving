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
            node.left = prev;
            prev = node;
        }
        prev.right = one;
        one.left = prev;

        int person = n;
        int count;
        Node cur = one;

//        do{
//            System.out.println(cur.val);
//            cur = cur.left;
//        }while (cur != one);
        
        while (person != 1){
            count = 1;

            while (count != k){
                cur = cur.right;
                count++;
            }
            Node temp = cur.right;
            cur.left.right = cur.right;
            cur.right.left = cur.left;

            cur = temp;
            person--;
        }
        
        return cur.val;
    }

    public class Node{
        int val;
        Node right;
        Node left;

        Node(){}

        Node(int val){
            this.val = val;
        }

        Node(int val, Node right, Node left){
            this.val = val;
            this.right = right;
            this.left = left;
        }
    }
    
}
