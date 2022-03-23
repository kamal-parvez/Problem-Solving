package contest.WeeklyContest282;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Cell {
    public List<String> cellsInRange(String s) {
        List<String> list = new ArrayList<>();

        for(char col=s.charAt(0); col<=s.charAt(3); col++){
            for(char row=s.charAt(1); row<=s.charAt(4); row++){
                list.add("" + col + row);
            }
        }

        return list;
    }

    public long minimalKSum(int[] nums, int k) {
        int len = nums.length;
        Arrays.sort(nums);
        long sum = 0;
        long cnt = 1;
        long kk = k;
        long diff;

        System.out.println(Arrays.toString(nums));

        for(int i=0; i<len; i++){
            if(kk == 0){
                break;
            }
            diff = nums[i] - cnt;

            if(diff <= 0){
                cnt = nums[i] + 1;
            }
            else if(kk >= diff){
                sum += (2 * cnt + (diff - 1)) * 0.5 * (diff);
                kk -= (diff);
                cnt = nums[i] + 1;
            }
            else if(kk < diff){
                sum += (2 * cnt + (kk - 1)) * 0.5 * (kk);
                kk = 0;
            }
            System.out.println("sum : " + sum);

        }

        System.out.println("kk : " + kk + "  cn : " + cnt);
        if(kk > 0){
            sum += ((2 * cnt + (kk - 1)) * (kk) ) / 2;
        }

        return sum;
    }


}
