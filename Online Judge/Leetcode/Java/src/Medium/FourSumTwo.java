package Medium;

//Leetcode - 454 - 4Sum II

import java.util.Arrays;
import java.util.HashMap;

public class FourSumTwo {

    public int fourSumCount(int[] nums1, int[] nums2, int[] nums3, int[] nums4) {
        int length = nums1.length;

        int[] ara1 = new int[length*length];
        int[] ara2 = new int[length*length];

        // Add each element of one array to each element to another array
        // Put the values into another ara
        twoSumOne(nums1, nums2, ara1, length);
        twoSumOne(nums3, nums4, ara2, length);

        length *= length;
        Arrays.sort(ara1);
        Arrays.sort(ara2);
        //System.out.println(Arrays.toString(ara1));
        //System.out.println(Arrays.toString(ara2));

        //Get the border of negative and non-negative values
        int border1 = borderPoint(ara1, length);
        int border2 = borderPoint(ara2, length);
        //System.out.println("border1 : " + border1 + "  border2 : " + border2);

        //Insert positive values of one array into HashMap
        // And Check if HashMap contains the key abs(negative values) of another array
        int res1 = findZeroes(ara1, border1, length, ara2, 0, border2);
        int res2 = findZeroes(ara2, border2, length, ara1, 0, border1);

        // Check the Zeroes
        int res3 = getTotalZeroes(ara1, length) * getTotalZeroes(ara2, length);

        // System.out.println("res1: " + res1 + "  res2 : " + res2 + "   res3: " + res3);

        return res1 + res2 + res3;
    }

    void twoSumOne(int[] num1, int[] num2, int[] ara, int length){
        for(int i=0; i<length; i++){
            for(int j=0; j<length; j++){
                ara[i*length+j] = num1[i] + num2[j];
            }
        }
    }

    int borderPoint(int[] ara, int length){
        for(int i=0; i<length; i++){
            if(ara[i] >= 0){
                return i;
            }
        }
        return length;
    }

    int findZeroes(int[] ara1, int start1, int end1, int[] ara2, int start2, int end2){
//        for(int i=start1; i<end1; i++){
//            System.out.print(ara1[i] + "  ");
//        }
//        System.out.println();
//        for(int i=start2; i<end2; i++){
//            System.out.print(ara2[i] + "  ");
//        }
//        System.out.println();

        HashMap <Integer, Integer> hm = new HashMap<>();

        for(int i=start1; i<end1; i++){
            if(hm.containsKey(ara1[i])){
                hm.put(ara1[i], hm.get(ara1[i]) + 1);
                continue;
            }
            hm.put(ara1[i], 1);
        }

        int totalCount = 0;

        for(int i=start2; i<end2; i++){
            if(hm.containsKey(Math.abs(ara2[i]))){
                totalCount += hm.get(Math.abs(ara2[i]));
            }
        }
        return totalCount;
    }

    int getTotalZeroes(int[] ara, int length){
        int count = 0;
        for(int i=0; i<length; i++){
            if(ara[i] == 0){
                count++;
            }
        }
        return count;
    }
}
