package Implementation.DP;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LISPathPrint {

    int[] ara;
    int[] dp;
    int length;
    int[] nextPoint;

    public List<Integer> LIS(int[] ara){
        this.ara = ara;
        length = ara.length;
        dp = new int[length];
        nextPoint = new int[length];
        Arrays.fill(dp, -1);
        Arrays.fill(nextPoint, -1);

        int ans = 0;
        int startIndex = -1;

        for(int i=0; i<length; i++){
            int res = fun(i);
            if(res > ans){
                ans = res;
                startIndex = i;
            }
        }

        List<Integer> list = new ArrayList<>();
        while (startIndex != -1){
            list.add(startIndex);
            startIndex = nextPoint[startIndex];
        }

        return list;
    }

    int fun(int i){

        if(dp[i] != -1){
            int ans = 0;
            for(int j=i+1; j<length; j++){
                if(ara[j] > ara[i]){
                    int res = fun(j);
                    if(res > ans){
                        ans = res;
                        nextPoint[i] = j;
                    }
                }
            }
            dp[i] = 1 + ans;
        }

        return dp[i];
    }
}
