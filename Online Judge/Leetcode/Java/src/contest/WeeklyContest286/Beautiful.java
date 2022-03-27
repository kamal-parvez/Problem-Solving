package contest.WeeklyContest286;

import java.util.ArrayList;
import java.util.List;

public class Beautiful {

    public int minDeletion(int[] nums) {
        int l = nums.length;
        List<Integer> list = new ArrayList<>();

        for(int i=0; i<l-1; i++){
            if(nums[i] != nums[i+1]){
                list.add(nums[i]);
                list.add(nums[i+1]);
                i++;
            }
        }
        System.out.println(list);
        int res = l - list.size();

        return res;
    }
}
