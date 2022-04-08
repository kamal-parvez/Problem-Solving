package kj.QualificationRound2022;



import java.util.Arrays;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        //new PunchCard().input();
        //new Printer().colorCombo();
        //new Dice().getMaxLength();
        //new ChainReactions().input();
    }
}


class ChainReactions{

    int n;
    int[] fun;
    int[] point;
    int[] visited;
    long ans;
    int abyss = 0;

    void input(){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        for(int caseNo=1; caseNo<=t; caseNo++){
            n = scanner.nextInt();
            fun = new int[n+1];
            point = new int[n+1];
            visited = new int[n+1];
            ans = 0;

            for(int i=1; i<=n; i++){
                fun[i] = scanner.nextInt();
            }
            for(int i=1; i<=n; i++){
                point[i] = scanner.nextInt();
            }

            getInitiator();
            System.out.println("Case #" + caseNo +": " + ans);
        }
    }

    void getInitiator(){

        int[] temp = new int[n+1];
        Arrays.fill(temp, 0);
        for(int i=1; i<=n; i++){
            temp[point[i]] = -1;
        }

        int[] ara = new int[n];
        int l = 0;
        for(int i=1; i<=n; i++){
            if(temp[i] != -1){
                ara[l] = i;
                l++;
            }
        }

        permute(ara, 0, l-1);
    }

    long chainReact(int[] ara, int l){
        Arrays.fill(visited, 0); // 0 means not visited.
        long sum = 0;

        for(int i=0; i<l; i++){
            int node = ara[i];
            //System.out.println("init : " + node);
            int res = fun[node];

            while (true){
                node = point[node];
                if(visited[node] == 0 && node != abyss){
                    res = Math.max(res, fun[node]);
                    visited[node] = 1; //visited
                }
                else{
                    break;
                }
            }
            //System.out.println("res : " + res);

            sum += res;
        }

        //System.out.println("sum : " + sum);
        return sum;
    }


    void permute(int[] ara, int l, int r){
        if(l == r){
            //System.out.println(Arrays.toString(ara));
            ans = Math.max(ans, chainReact(ara, r+1));
        }
        else{
            for(int i=l; i<=r; i++){
                int temp = ara[l];
                ara[l] = ara[i];
                ara[i] = temp;

                permute(ara, l+1, r);

                temp = ara[l];
                ara[l] = ara[i];
                ara[i] = temp;
            }
        }
    }
}


class Dice{

    void getMaxLength(){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int n;
        int[] s;

        for(int caseNo=1; caseNo<=t; caseNo++){

            //input
            n = scanner.nextInt();
            s = new int[n];
            for(int i=0; i<n; i++){
                s[i] = scanner.nextInt();
            }

            Arrays.sort(s);
            //System.out.println(Arrays.toString(s));

            int count = 0;

            for(int i=0; i<n; i++){
                if(count < s[i]){
                    count++;
                }
            }

            System.out.println("Case #" + caseNo +": " + count);
        }
    }
}


class Printer{

    public void colorCombo(){
        int numOfPrinter = 3;
        int numOfColor = 4;
        int totalColor = 1000000;

        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int[][] prnt = new int[numOfPrinter][numOfColor];

        for(int caseNo=1; caseNo<=t; caseNo++){

            for(int j=0; j<numOfPrinter; j++){
                for(int k=0; k<numOfColor; k++){
                    prnt[j][k] = scanner.nextInt();
                }
            }

            int temp;
            int sum = 0;
            int[] color = new int[numOfColor];

            for(int j=0; j<numOfColor; j++){
                temp = Integer.MAX_VALUE;
                for(int k=0; k<numOfPrinter; k++){
                    temp = Math.min(temp, prnt[k][j]);
                }

                color[j] = temp;
                sum += temp;
            }

            System.out.print("Case #" + caseNo +": ");

            if(sum < totalColor){
                System.out.println("IMPOSSIBLE");
            }
            else{
                sum = totalColor;

                for(int j=0; j<numOfColor; j++){
                    if(color[j] <= sum){
                        System.out.print(color[j]);
                        sum -= color[j];
                    }
                    else {
                        System.out.print(sum);
                        sum = 0;
                    }

                    if(j < numOfColor-1){
                        System.out.print(" ");
                    }
                }
                System.out.println();
            }


        }
    }


}


class PunchCard{
    public void input(){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int r, c;

        for(int i=1; i<=t; i++){
            r = scanner.nextInt();
            c = scanner.nextInt();
            printMatrix(r, c, i);
        }
    }

    public void printMatrix(int r, int c, int caseNo){
        char[][] mat = new char[2*r+1][2*c+1];

        for(int i=0; i<=2*r; i=i+2){
            for(int j=0; j<2*c; j=j+2){
                mat[i][j] = '+';
                mat[i][j+1] = '-';
            }
            mat[i][2*c] = '+';
        }

        for(int i=1; i<2*r; i=i+2){
            for(int j=0; j<2*c; j=j+2){
                mat[i][j] = '|';
                mat[i][j+1] = '.';
            }
            mat[i][2*c] = '|';
        }

        mat[0][0] = '.';
        mat[0][1] = '.';
        mat[1][0] = '.';
        mat[1][1] = '.';

        System.out.println("Case #" + caseNo +":");
        for(int i=0; i<=2*r; i++){
            for(int j=0; j<=2*c; j++){
                System.out.print(mat[i][j]);
            }
            System.out.println();
        }

    }
}

