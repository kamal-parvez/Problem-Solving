package Hard;


//leetcode - 968. Binary Tree Cameras

import Implementation.Node;

import java.util.Arrays;
import java.util.HashMap;

public class BinaryTreeCameras {

    int[][] dp;
    int installCam = 1;
    int notInsCam = 0;
    int empty = -1;
    int count = 0;
    int[] color;
    int[] par;
    HashMap<TreeNode, Integer> map = new HashMap<>();

    public void input(){
        TreeNode root = new TreeNode(0);
        TreeNode cur = root;

        cur.left = new TreeNode(0);
        cur = cur.left;
        cur.right = new TreeNode(0);
        cur = cur.right;
        cur.left = new TreeNode(0);
        cur = cur.left;
        cur.right = new TreeNode(0);
        cur = cur.right;
        cur.left = new TreeNode(0);
        cur = cur.left;

//        root.left = new TreeNode(0);
//        root.left.left = new TreeNode(0);
//        root.left.left.left = new TreeNode(0);
//        root.left.left.left.left = new TreeNode(0);
//        root.left.left.left.left.left = new TreeNode(0);

        System.out.println(minCameraCover(root));
    }

    void preorderTraversal(TreeNode cur){
        if(cur == null) return;

        map.put(cur, count);
        count++;
        preorderTraversal(cur.left);
        preorderTraversal(cur.right);
    }

    public int minCameraCover(TreeNode root) {

        if(root.left == null && root.right == null){
            return 1;
        }
        else{
            preorderTraversal(root);

            color = new int[count];
            Arrays.fill(color, notInsCam);

            par = new int[count];
            Arrays.fill(par, empty);

            dp = new int[count][2];
            for(int i=0; i<count; i++){
                Arrays.fill(dp[i], empty);
            }

            int res1 = fun(root, installCam);
            System.out.println("res1 : " + res1);
            for(int i=0; i<count; i++){
                System.out.println("in: " + i + "   " + Arrays.toString(dp[i]));
                Arrays.fill(dp[i], empty);
            }
          
            int res2 = fun(root, notInsCam);
            System.out.println("res2: " + res2);
            for(int i=0; i<count; i++){
                System.out.println("in: " + i + "   " + Arrays.toString(dp[i]));
            }
            return Math.min(res1, res2);
        }
    }

    int fun(TreeNode cur, int isCam){

        if(cur == null) return 0;


        if(dp[map.get(cur)][isCam] == empty){
            color[map.get(cur)] = isCam;
            if(cur.left != null) par[map.get(cur.left)] = map.get(cur);
            if(cur.right != null) par[map.get(cur.right)] = map.get(cur);

            int ans = isCam;
            if(isCam == installCam){
                ans += fun(cur.left, notInsCam)   + fun(cur.right, notInsCam);
            }
            else if(isCam == notInsCam && map.get(cur) != 0 && color[par[map.get(cur)]] == installCam){
               ans += Math.min(fun(cur.left, installCam), fun(cur.left, notInsCam));
               ans += Math.min(fun(cur.right, installCam), fun(cur.right, notInsCam));
            }
            else{
                int temp1 = fun(cur.left, installCam);
                int temp2 = fun(cur.right, installCam);
                if(temp1 == 0 && temp2 == 0) {
                    ans += 0;
                }
                else if(temp2 ==0 || temp1 < temp2) {
                    ans += temp1 + Math.min(fun(cur.right, installCam), fun(cur.right, notInsCam));
                }
                else if(temp1 ==0 || temp1 >= temp2){
                    ans += temp2 + Math.min(fun(cur.left, installCam), fun(cur.left, notInsCam));
                }
            }

            dp[map.get(cur)][isCam] = ans;
        }

        return dp[map.get(cur)][isCam];
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
