package Easy;

import java.util.ArrayList;
import java.util.List;

//Leetcode - 94. Binary Tree Inorder Traversal


public class BinaryTreeInorderTraversal {
    List<Integer> list;

    public List<Integer> inorderTraversal(TreeNode root) {
        list = new ArrayList<>();
        inorder(root);

        return list;
    }

    void inorder(TreeNode root){
        if(root == null){
            return;
        }

        inorder(root.left);
        list.add(root.val);
        inorder(root.right);

    }

    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }

    }
}
