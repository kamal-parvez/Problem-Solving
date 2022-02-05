package Hard;

//LeetCode - 23. Merge k Sorted Lists

public class MergeKSortedList {

    //ListNode[] head;

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

//    public void makeList(){
//
//        head = new ListNode[3];
//
//        head[0] = new ListNode();
//        head[0].val = 1;
//        head[0].next = new ListNode();
//        head[0].next.val = 4;
//        head[0].next.next = new ListNode();
//        head[0].next.next.val = 5;
//        head[0].next.next.next = null;
//
//        head[1] = new ListNode();
//        head[1].val = 1;
//        head[1].next = new ListNode();
//        head[1].next.val = 3;
//        head[1].next.next = new ListNode();
//        head[1].next.next.val = 4;
//        head[1].next.next.next = null;
//
//        head[2] = new ListNode();
//        head[2].val = 2;
//        head[2].next = new ListNode();
//        head[2].next.val = 6;
//        head[2].next.next = null;
//
//        for(int i=0; i<3; i++){
//            ListNode temp = head[i];
//
//            while (temp != null){
//                System.out.println(i + " : " + temp.val);
//                temp = temp.next;
//
//            }
//        }
//
//        ListNode res = mergeKLists(head);
//
//        while(res != null){
//            System.out.println(res.val + "  ");
//            res = res.next;
//        }
//        System.out.println();
//
//    }

    public ListNode mergeKLists(ListNode[] lists) {
        int length = lists.length;
        //System.out.println("length : " + length);

        if(length == 0){
            return null;
        }

        ListNode res = lists[0];

        for(int i=1; i<length; i++){
            ListNode currentHead = null;
            ListNode currentPrev = null;
            ListNode current;
            ListNode temp = null;

            while(res != null || lists[i] != null){

                current = new ListNode();

                if(res == null){
                    temp = lists[i];
                    lists[i] = lists[i].next;
                }
                else if(lists[i] == null){
                    temp = res;
                    res = res.next;
                }
                else if(res.val <= lists[i].val){
                    temp = res;
                    res = res.next;
                }
                else if(res.val > lists[i].val){
                    temp = lists[i];
                    lists[i] = lists[i].next;
                }


                current.val = temp.val;
                current.next = null;

                if(currentHead == null){
                    currentHead = current;
                    currentPrev = current;
                }
                else{
                    currentPrev.next = current;
                    currentPrev = current;
                }
            }

            res = currentHead;

//            System.out.println(i + "  :  ");
//            while(res != null){
//                System.out.println(res.val + "  ");
//                res = res.next;
//            }
//            System.out.println();
        }

        return res;
    }
}
