package contest.WeeklyContest286;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class NewClass {

    List<List<Integer>> res;
    int inf;

    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        int l1 = nums1.length;
        int l2 = nums2.length;
        inf = 100000;

        Arrays.sort(nums1);
        Arrays.sort(nums2);

        //System.out.println(Arrays.toString(nums1));
        //System.out.println(Arrays.toString(nums2));

        for(int i=0; i<l1; i++){
            int temp = nums1[i];

            for(int j=0; j<l2; j++){
                if(temp == nums2[j]){
                    nums1[i] = inf;
                    nums2[j] = inf;
                }
            }

            for(int j=i+1; j<l1; j++){
                if(temp == nums1[j]){
                    nums1[j] = inf;
                }
                else{
                    break;
                }
            }

        }

        //System.out.println(Arrays.toString(nums1));
        //System.out.println(Arrays.toString(nums2));

        res = new ArrayList<>();
        fun(nums1, l1);
        fun(nums2, l2);

        return res;
    }

    public void fun(int[] nums, int l){
        List<Integer> temp = new ArrayList<>();

        for(int i=0; i<l; i++){
            if(i== 0 && nums[i] != inf){
                temp.add(nums[i]);
            }
            else if(i > 0 && nums[i] != inf && nums[i] != nums[i-1]){
                temp.add(nums[i]);
            }
        }
        res.add(temp);
    }

}
