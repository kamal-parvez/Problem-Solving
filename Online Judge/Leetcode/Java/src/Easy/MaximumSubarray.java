package Easy;


//Leetcode - 53. Maximum Subarray
//Using Kadane's ALgo

public class MaximumSubarray {

    public int maxSubArray(int[] nums) {
        int max = Integer.MIN_VALUE;
        int prevMax = 0;

        for(int element: nums){
            prevMax += element;

            if(prevMax > max){
                max = prevMax;
            }

            if(prevMax < 0){
                prevMax = 0;
            }
        }

        return max;
    }

}
