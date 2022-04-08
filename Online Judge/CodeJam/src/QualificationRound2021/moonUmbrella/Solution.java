//package QualificationRound2021.moonUmbrella;
//
//
//import java.util.Arrays;
//import java.util.Scanner;
//
//public class Solution {
//    static int x;
//    static int y;
//    static String str;
//    static int n;
//    static int inf = -10000;
//    static int[] dp;
//
//    public static void main(String[] args) {
//        Scanner scanner = new Scanner(System.in);
//        int t = scanner.nextInt();
//        for(int i=1; i<=t; i++){
//            x = scanner.nextInt();
//            y = scanner.nextInt();
//            str = scanner.nextLine();
//            n = str.length();
//            dp = new int[n];
//
//            Arrays.fill(dp, inf);
//            int res = minCost(0, 'x');
//            System.out.println("Case #" + i +": "+ res);
//        }
//    }
//
//    static int minCost(int i){
//
//        if(i == n-1) return 0;
//
//        if(dp[i] == inf){
//            int cost;
//            if(str.charAt(i) == '?' && str.charAt(i) == '?'){
//                cost = Math.min(x+minCost(i+1, 'J'), minCost(i+1, 'C'));
//            }
//            else if(lastChar == 'J' && str.charAt(i) == '?'){
//                cost = Math.min(y+minCost(i+1, 'C'), minCost(i+1, 'J'));
//            }
//            else if(lastChar == 'C' && str.charAt(i) == 'J'){
//                cost = x + minCost(i+1, str.charAt(i));
//            }
//            else if(lastChar == 'J' && str.charAt(i) == 'C'){
//                cost = y + minCost(i+1, str.charAt(i));
//            }
//            else{
//                cost = minCost(i+1, str.charAt(i));
//            }
//
//            dp[i] = cost;
//        }
//
//        return dp[i];
//
//    }
//
//}
//
//
