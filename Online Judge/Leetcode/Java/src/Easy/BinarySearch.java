package Easy;

//leetcode - 704. Binary Search

public class BinarySearch {

    public int search(int[] nums, int target) {
        int low = 0, mid, hi = nums.length - 1;
        int res = -1;

        while (low <= hi){
            mid = (low + hi) / 2;

            if(nums[mid] == target){
                res = mid;
                break;
            }
            else if(nums[mid] > target){
                hi = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return res;
    }
}
