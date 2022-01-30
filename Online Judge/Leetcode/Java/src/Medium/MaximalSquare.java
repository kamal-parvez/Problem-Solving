package Medium;

// LEETCODE  Problem No. 221 - Maximal Square

import java.util.Arrays;

public class MaximalSquare {


    public MaximalSquare() {
    }

    public int maximalSquare(char[][] matrix) {
        int row = matrix.length;
        int column = matrix[0].length;
        int[][] dp = new int[row][column];

        //Fill first row of DP with first row of Matrix
        for(int i=0; i<column; i++){
            dp[0][i] = (int) matrix[0][i] - '0';
        }

        //Fill first column of DP with first column of Matrix
        for(int i=0; i<row; i++){
            dp[i][0] = (int) matrix[i][0] - '0';
        }

        //Calculate Max Square
        for(int i=1; i<row; i++){
            for(int j=1; j<column; j++){
                if(matrix[i][j] == '1'){
                    dp[i][j] = Math.min(dp[i-1][j], Math.min(dp[i][j-1], dp[i-1][j-1])) + 1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }

        //Search for Max Square in DP
        int maxSize = dp[0][0];
        int rowIndex = 0;
        int colIndex = 0;

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(dp[i][j] > maxSize){
                    maxSize = dp[i][j];
                    rowIndex = i;
                    colIndex = j;
                }
            }
        }
        System.out.println("Max Size: " + maxSize + "  RowIndex: " + rowIndex + "  ColIndex " + colIndex);
        for(int i=rowIndex; i>rowIndex-maxSize; i--){
            for(int j=colIndex; j>colIndex-maxSize; j--){
                System.out.print(matrix[i][j] + "  ");
            }
            System.out.println();
        }
        return  maxSize * maxSize;
    }

}
