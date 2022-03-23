package contest.WeeklyContest285;

public class NewClass {
    public int countHillValley(int[] nums) {
        int l = nums.length;
        int count = 0;
        boolean prevGreater = false;
        boolean prevSmaller = false;

        for(int i=1; i<l-1; i++){
            if(nums[i-1] < nums[i] && nums[i+1] < nums[i]){
                count++;
            }
            else if(nums[i-1] > nums[i] && nums[i+1] > nums[i]){
                count++;
            }
            else if(nums[i-1] > nums[i] && nums[i+1] == nums[i]){
                prevGreater = true;
            }
            else if(nums[i-1] < nums[i] && nums[i+1] == nums[i]){
                prevSmaller = true;
            }
            else if(nums[i-1] == nums[i] && nums[i+1] < nums[i] && prevSmaller){
                count++;
                prevSmaller = false;
            }
            else if(nums[i-1] == nums[i] && nums[i+1] > nums[i] && prevSmaller){
                prevSmaller = false;
            }
            else if(nums[i-1] == nums[i] && nums[i+1] > nums[i] && prevGreater){
                count++;
                prevGreater = false;
            }
            else if(nums[i-1] == nums[i] && nums[i+1] < nums[i] && prevGreater){
                prevGreater = false;
            }

        }

        return count;
    }

    public int countCollisions(String directions) {
        int l = directions.length();
        int count = 0;
        boolean stat = false;
        int rightCount = 0;

        for(int i=0; i<l; i++){
            if(i < l-1 && directions.charAt(i) == 'R' && directions.charAt(i+1) == 'L'){
                count = count + 2 + rightCount;
                rightCount = 0;
                i++;
                stat = true;
            }
            else if(i < l-1 &&  directions.charAt(i) == 'R' && directions.charAt(i+1) == 'S'){
                count = count + 1 + rightCount;
                rightCount = 0;
                i++;
                stat = true;
            }
            else if(i < l-1 &&  directions.charAt(i) == 'R' && directions.charAt(i+1) == 'R'){
                rightCount++;
            }

            else if(i > 0 && directions.charAt(i) == 'L' && (directions.charAt(i-1) == 'S' || stat)){
                count ++;
                stat = true;
            }

        }

        return count;
    }

}
