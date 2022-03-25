package Medium;


//leetcode - 334. Increasing Triplet Subsequence

public class IncreasingTripletSubsequence {

    public boolean increasingTriplet(int[] nums) {
        boolean flag = false;
        int inf = Integer.MAX_VALUE;
        int point1 = nums[0], point2 = inf, point3 = inf, point1Temp = inf;
        int length = nums.length;

        for(int i=1; i<length; i++){
            if(point1 > nums[i] && point2 == inf){
                point1 = nums[i];
            }
            else if(point1 > nums[i] && point2 != inf && point1Temp == inf){
                point1Temp = nums[i];
            }
            else if(point1 < nums[i] && point2 > nums[i]){
                point2 = nums[i];
            }
            else if(point2 > nums[i] && point1Temp != inf){
                point1 = point1Temp;
                point2 = nums[i];
            }
            else if(point1 < nums[i] && point2 < nums[i] && point3 >= nums[i]){
                point3 = nums[i];
                flag = true;
                break;
            }

        }

        return flag;
    }
}
