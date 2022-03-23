package Easy;

//Leetcode- 100. Same Tree


public class SameTree {
    boolean flag;

    public boolean isSameTree(TreeNode p, TreeNode q) {

        flag = true;
        preorderTraversal(p, q);

        return flag;
    }


    void preorderTraversal(TreeNode root1, TreeNode root2){
        if(root1 == null && root2 != null){
            flag = false;
            return;
        }
        else if(root1 != null && root2 == null){
            flag = false;
            return;
        }
        else if(root1 == null && root2 == null){
            return;
        }

        if(root1.val != root2.val){
            flag = false;
            return;
        }
        preorderTraversal(root1.left, root2.left);
        preorderTraversal(root1.right, root2.right);

    }



    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }
}

