package Easy;

//leetcode - 203. Remove Linked List Elements (Recursion)

public class RemoveLinkedListElements {

    ListNode newHead;
    public ListNode removeElements(ListNode head, int val) {
        newHead = null;
        recFun(head, newHead, val);

        return newHead;
    }

    public void recFun(ListNode cur, ListNode newNode, int val){

        if(cur == null) return;

        if(newHead == null && cur.val != val){
            newHead = cur;
            recFun(cur.next, newHead, val);
        }
        else if(newHead == null && cur.val == val){
            recFun(cur.next, null, val);
        }
        else if(newHead != null && cur.val != val){
            newNode.next = cur;
            recFun(cur.next, newNode.next, val);
        }
        else if(newHead != null && cur.val == val){
            newNode.next = null;
            recFun(cur.next, newNode, val);
        }
    }

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
}
