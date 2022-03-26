package Easy;

//206. Reverse Linked List (Recursion)

public class ReverseLinkedList {
    ListNode newHead;

    public ListNode reverseList(ListNode head) {

        newHead = null;

        if(head != null){
            recFun(head);
        }
        return newHead;
    }

    public ListNode recFun(ListNode cur){
        if(cur.next == null){
            newHead = cur;
            return cur;
        }

        ListNode node = recFun(cur.next);
        node.next = cur;
        cur.next = null;

        return cur;
    }

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
}
