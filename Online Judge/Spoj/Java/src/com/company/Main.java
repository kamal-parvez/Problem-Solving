package com.company;

import java.util.Arrays;
import java.util.Scanner;


//KNAPSACK - The Knapsack Problem - spoj

public class Main {

    public static void main(String[] args) {
	// write your code here
        new Knapsack().input();
    }
}

class Knapsack{
    int s;
    int n;
    int[][] items;
    int[][] dp;
    int emptyValue = -1;

    public void input(){
        Scanner scanner = new Scanner(System.in);
        s = scanner.nextInt();
        n = scanner.nextInt();
        items = new int[n][2];
        for(int i=0; i<n; i++){
            items[i][0] = scanner.nextInt();
            items[i][1] = scanner.nextInt();
        }

        dp = new int[n][s+1];
        for(int i=0; i<n; i++){
            Arrays.fill(dp[i], emptyValue);
        }

        System.out.println(getMaxValue(0, 0));

    }

    public int getMaxValue(int i, int bag){

        if(i == n){
            return 0;
        }

        if(dp[i][bag] == -1){
            int res = Integer.MIN_VALUE;
            if(bag + items[i][0] <= s){
                res = items[i][1] + getMaxValue(i+1, bag + items[i][0]);
            }
            dp[i][bag] = Math.max(res, getMaxValue(i+1, bag));
        }

        return dp[i][bag];
    }
}
