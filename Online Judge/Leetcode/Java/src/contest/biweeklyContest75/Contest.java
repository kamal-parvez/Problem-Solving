package contest.biweeklyContest75;

import java.util.Arrays;

public class Contest {

    public int minBitFlips(int start, int goal) {

        int res = 0;
        String str1 = Integer.toBinaryString(start);
        String str2 = Integer.toBinaryString(goal);
        //System.out.println(str1);
        //System.out.println(str2);

        int l1 = str1.length();
        int l2 = str2.length();
        int temp = Math.abs(l1-l2);

        if(l1 > l2){
            str2 = addLeadingZeros(str2, temp);
        }
        else if(l1 < l2){
            str1 = addLeadingZeros(str1, temp);
        }
        int l = Math.max(l1, l2);

        //System.out.println(str1);
        //System.out.println(str2);

        for(int i=0; i<l; i++){
            if(str1.charAt(i) != str2.charAt(i)){
                res++;
            }
        }

        return res;
    }

    String addLeadingZeros(String str, int c){
        while(c != 0){
            str = "0" + str;
            c--;
        }
        return str;
    }


    public int triangularSum(int[] nums) {
        int l = nums.length;
        int temp = l;
        //System.out.println(Arrays.toString(nums));
        for(int i=0; i<temp-1; i++){
            for(int j=0; j<l-1; j++){
                nums[j] = (nums[j] + nums[j+1]) % 10;
            }
            l--;

            //System.out.println(Arrays.toString(nums));
        }

        return nums[0];
    }


    public long numberOfWays(String s) {

        return findWay('0', '1', s) + findWay('1', '0', s);

    }

    long findWay(char ch, char mid, String str){
        int l = str.length();
        int countHead = 0;
        int countTail = 0;

        //find fisrt 1
        int point = 0;
        for(int i=0; i<l; i++){
            if(str.charAt(i) == mid){
                point = i;
                break;
            }
            else {
                countHead++;
            }
        }
        for(int i=point+1; i<l; i++){

            if(str.charAt(i) == ch){
                countTail++;
            }
        }

        long res = 0;

        for(int i=point; i<l; i++){
            if(str.charAt(i) == mid){
                res += (countHead * countTail);
            }
            else {
                countHead++;
                countTail--;
            }
        }

        return res;
    }
}
