package Easy;

//Leetcode - 101. Symmetric Tree

public class SymmetricTree {
    boolean flag;

    public boolean isSymmetric(TreeNode root) {
        flag = true;
        preorderTraversal(root.left, root.right);

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
        preorderTraversal(root1.left, root2.right);
        preorderTraversal(root1.right, root2.left);

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

