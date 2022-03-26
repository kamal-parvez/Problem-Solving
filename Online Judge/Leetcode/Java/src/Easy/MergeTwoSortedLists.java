package Easy;


//leetcode - 21. Merge Two Sorted Lists (recursion)

public class MergeTwoSortedLists {

    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {

        ListNode head;

        if(list1 == null && list2 == null){
            head = null;
        }
        else if((list1 != null && list2 == null )
                || (list1 != null && list2 != null && list1.val <= list2.val)) {
            head = new ListNode(list1.val);
            recFun(head, list1.next, list2);
        }
        else {
            head = new ListNode(list2.val);
            recFun(head, list1, list2.next);
        }

        return head;
    }

    public void recFun(ListNode cur, ListNode first, ListNode second){
        if(first == null && second == null){
            return;
        }
        else if((first != null && second == null) ||
                (first != null && second != null && first.val <= second.val)){
            cur.next = new ListNode(first.val);
            recFun(cur.next, first.next, second);
        }
        else{
            cur.next = new ListNode(second.val);
            recFun(cur.next, first, second.next);
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
