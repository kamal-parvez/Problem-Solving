package Hard;

//leetcode - 312. Burst Balloons


import Implementation.Node;

import java.util.Arrays;

public class BurstBalloons {

    Node head;

    public int maxCoins(int[] nums) {
        int l = nums.length;
        head = new Node(nums[0]);
        Node cur = head;
        for(int i=0; i<l; i++){
            Node temp = new Node(nums[i]);
            cur.right = temp;
            temp.left = cur;
            cur = temp;
        }

        printNode(head);
        System.out.println();

        Node prev = null, target = null, next = null;
        int min = Integer.MAX_VALUE;
        int ans = 0;
        for(int i=0; i<l; i++){
            cur = head;
            while (cur != null){
                if(cur.val < min){
                    target = cur;
                    prev = cur.left;
                    next = cur.right;
                    min = cur.val;
                }
                cur = cur.right;
            }

            ans += calculateCoin(target, prev, next);
            printNode(head);
            System.out.println();
        }

        return ans;
    }

    void printNode(Node cur){
        if(cur == null) return;
        System.out.print(cur.val + "  ");
        printNode(cur.right);
    }

    int calculateCoin(Node target, Node prev, Node next){
        int ans = 0;
        if(prev == null && next == null){
            ans = target.val;
            head = null;
        }
        else if(prev == null){
            ans = (target.val * next.val);
            next.left = null;
            head = next;
        }
        else if(next == null){
            ans = (prev.val * target.val);
            prev.right = null;
        }
        else{
            ans = (prev.val * target.val * next.val);
            prev.right = next;
            next.left = prev;
        }

        return ans;
    }

    class Node{
        int val;
        Node left;
        Node right;

        public Node(int val){
            this.val = val;
        }
    }


}

