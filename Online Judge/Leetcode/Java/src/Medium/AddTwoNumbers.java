package Medium;

//LeetCode - 2. Add Two Numbers

import java.util.Arrays;

public class AddTwoNumbers {

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        int sum = l1.val + l2.val;
        int carry = sum / 10;
        sum = sum % 10;
        ListNode head = new ListNode(sum);
        ListNode current = head;
        l1 = l1.next;
        l2 = l2.next;

        while (l1 != null || l2 != null){

            if(l1 != null && l2 != null){
                sum = l1.val + l2.val + carry;
                l1 = l1.next;
                l2 = l2.next;
            }
            else if(l1 != null && l2 == null){
                sum = l1.val + carry;
                l1 = l1.next;
            }
            else if(l1 == null && l2 != null){
                sum = l2.val + carry;
                l2 = l2.next;
            }

            carry = sum / 10;
            sum = sum % 10;

            ListNode temp = new ListNode(sum);
            current.next = temp;
            current = temp;

        }

        if(carry > 0){
            ListNode temp = new ListNode(carry);
            current.next = temp;
        }

        return head;
    }

}
