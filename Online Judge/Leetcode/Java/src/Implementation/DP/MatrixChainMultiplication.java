package Implementation.DP;

import java.util.Arrays;
import java.util.Scanner;

public class MatrixChainMultiplication {
    Matrix[] mat;
    int[][] dp;
    int emptyValue = -1;

    public void input(){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        mat = new Matrix[n];
        for(int i=0; i<n; i++){
            int row = scanner.nextInt();
            int col = scanner.nextInt();
            mat[i] = new Matrix(row, col);
        }
        System.out.println("operation : " + getOperation());
    }

    public int getOperation(){
        int l = mat.length;
        dp = new int[l][l];
        for(int i=0; i<l; i++){
            Arrays.fill(dp[i], emptyValue);
        }

        return fun(0, l-1);
    }

    public int fun(int i, int j){
        if(i >= j) return 0;

        int ans = Integer.MAX_VALUE;
        if(dp[i][j] == emptyValue){
            for(int k=i; k<j; k++){
                ans = Math.min(ans, fun(i, k) + fun(k+1, j) + mergeMatrix(i, k, j));
            }

            dp[i][j] = ans;
        }

        return dp[i][j];
    }

    int mergeMatrix(int i, int k, int j){
        return mat[i].row * mat[k].col * mat[j].col;
    }

    class Matrix{
        int row;
        int col;
        Matrix (int row, int col){
            this.row = row;
            this.col = col;
        }
    }
}


