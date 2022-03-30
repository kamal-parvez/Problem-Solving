package Medium;

//leetcode - 24. Swap Nodes in Pairs


public class SwapNodesInPairs {

    public ListNode swapPairs(ListNode head) {
        return recFun(head);
    }

    public ListNode recFun(ListNode cur){
        if(cur == null || cur.next == null){
            return cur;
        }
        //System.out.println("cur : " + cur.val);
        ListNode second = cur.next;
        ListNode third = second.next;
        second.next = cur;
        cur.next = recFun(third);
        return second;
    }




    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

}
