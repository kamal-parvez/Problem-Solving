package QualificationRound2021.reversort;

//import QualificationRound2021.reversort.Reversort;

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Reversort reversort = new Reversort();
        reversort.input();
    }
}


class Reversort {

    public void input(){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int n;
        int[] ara;
        for(int i=1; i<=t; i++){
            n = scanner.nextInt();
            ara = new int[n];
            for(int j=0; j<n; j++){
                ara[j] = scanner.nextInt();
            }

            int res = getCost(ara, n);
            System.out.println("Case #" + i +": "+ res);
        }

    }

    public int getCost(int[] ara, int n){
        int cost = 0;

        for(int i=0; i<n-1; i++){
            int minValue = Integer.MAX_VALUE;
            int minPos = -1;

            //find min value
            for(int j=i; j<n; j++){
                if(ara[j] < minValue){
                    minValue = ara[j];
                    minPos = j;
                }
            }

            cost += minPos - i + 1;

            //reverse
            int j = i, k = minPos;
            while (j < k){
                ara[j] = ara[j] + ara[k];
                ara[k] = ara[j] - ara[k];
                ara[j] = ara[j] - ara[k];
                j++;
                k--;
            }
            //System.out.println("cost : " + cost);
            //System.out.println("ara : " + Arrays.toString(ara));

        }

        return cost;
    }
}

