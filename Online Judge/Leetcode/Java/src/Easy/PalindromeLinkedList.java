package Easy;

//leetcode - 234. Palindrome Linked List (Recursion)

public class PalindromeLinkedList {

    boolean flag;
    public boolean isPalindrome(ListNode head) {
        flag = true;
        recFun(head, head);

        return flag;
    }

    public ListNode recFun(ListNode head, ListNode cur){
        if(cur == null){
            return head;
        }

        ListNode temp = recFun(head, cur.next);

        if(temp.val != cur.val){
            flag = false;
        }

        return temp.next;
    }

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
}
