package Medium;

import java.util.*;

public class MaximumLengthOfPairChain {

    int[] dp;

    public int findLongestChain(int[][] pairs) {
        int l = pairs.length;
//        for(int i=0; i<l; i++){
//            System.out.println(Arrays.toString(pairs[i]));
//        }
//        List<Element> list = new ArrayList<>();
//
//        for(int i=0; i<l; i++){
//            Element el = new Element(pairs[i][0], pairs[i][1]);
//            list.add(el);
//        }
//        Collections.sort(list);
//        for(Element e : list){
//            System.out.println(Arrays.toString(new String[]{e.getLeft() + "     " + e.getRight()}));
//        }

        Element[] elements = new Element[l];
        for(int i=0; i<l; i++){
            elements[i] = new Element(pairs[i][0], pairs[i][1]);
        }
        Arrays.sort(elements);
//        for(int i=0; i<l; i++){
//            System.out.println(Arrays.toString(new String[]{elements[i].getLeft() + "     " + elements[i].getRight()}));
//        }

        dp = new int[l];
        Arrays.fill(dp, -1);
        int ans = 1;
        for(int i=0; i<l; i++){
            ans = Math.max(ans, recFun(i, elements, l));
        }

        return ans;
    }

    int recFun(int i, Element[] elements, int l){

        if(dp[i] == -1){
            int count = 1;
            for(int j=i+1; j<l; j++){
                if(elements[j].left > elements[i].right){
                    count = Math.max(count, 1 + recFun(j, elements, l));
                }
            }
            dp[i] = count;
        }

        return dp[i];
    }
}

class Element implements Comparable<Element>{
    int left;
    int right;

    public Element(int left, int right) {
        this.left = left;
        this.right = right;
    }

    @Override
    public int compareTo(Element o) {
        return this.left - o.left;
    }

    public int getLeft() {
        return left;
    }

    public int getRight() {
        return right;
    }
}
