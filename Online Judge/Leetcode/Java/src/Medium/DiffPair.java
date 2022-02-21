package Medium;

//Leetcode - 532. K-diff Pairs in an Array

import java.util.*;

public class DiffPair {
    public int findPairs(int[] nums, int k) {
        Set<Integer> set = new LinkedHashSet<Integer>();
        int length = nums.length;
        System.out.println("real : " + Arrays.toString(nums));
        for(int i=0; i<length; i++){
            nums[i] += 10000000;
            set.add(nums[i]);
        }
        List<Integer> list = new ArrayList<Integer>(set);
        Collections.sort(list);
        System.out.println("Append : " + Arrays.toString(nums));

        System.out.println("set : " + set);
        System.out.println("list : " + list);

        int count = 0;
        Arrays.sort(nums);
        System.out.println("sorted : "+ Arrays.toString(nums));

        int i = 0, j = i + 1;
        int flag = 0;

        for(int element: list){
            flag = 0;
            System.out.println("element: " + element);
            while(i<length-1){

                if(nums[i] == element) {
                    while(j < length) {
                        System.out.println("i: " + nums[i] + "   j : " + nums[j]);
                        if(nums[j] > element + k){
                            break;
                        }
                        if(i!=j && nums[j] == element + k){
                            count++;
                            break;
                        }
                        j++;
                    }
                    flag = 1;
                }
                System.out.println("jj " + j + "  " + nums[j]);
                if(flag == 1){
                    break;
                }
                i++;
                j++;
            }
        }

        return count;
    }
}
