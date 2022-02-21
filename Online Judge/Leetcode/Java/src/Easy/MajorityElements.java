package Easy;

//Leetcode - 169. Majority Element

import java.util.Arrays;

public class MajorityElements {

    public int majorityElement(int[] nums) {

        Arrays.sort(nums);
        //System.out.println(nums);
        int l = nums.length;

        return nums[(int) Math.ceil(l/2)];
    }
}
