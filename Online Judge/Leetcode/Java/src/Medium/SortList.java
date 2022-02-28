package Medium;

import java.util.Arrays;

// Leetecode - 148. Sort List

public class SortList {


    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public ListNode sortList(ListNode head) {

        if(head ==null){
            return null;
        }

        int index = 0;
        int maxSize =  50000;
        int[] ara = new int[maxSize];

        while(head != null){
            ara[index] = head.val;
            head = head.next;
            index++;
        }

        //System.out.println(ara.toString());
        int araLength = index;
        Arrays.sort(ara, 0, index);
        ListNode current = new ListNode(ara[0]);
        head = current;

        for(int i=1; i<araLength; i++){
            ListNode temp = new ListNode(ara[i]);
            current.next = temp;
            current = temp;
        }

        return head;
    }
}

