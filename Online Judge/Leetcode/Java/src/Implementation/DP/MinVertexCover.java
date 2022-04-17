package Implementation.DP;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class MinVertexCover {

    List<Integer> path[];
    int n;
    int[][] dp;
    int[] par;

    public void input(){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<Integer> path[] = new List[n];
        for(int i=0; i<n; i++){
            path[i] = new ArrayList<>();
        }
        for(int i=0; i<n-1; i++){
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            path[u].add(v);
            path[v].add(u);
        }

        System.out.println("Min Vertex Cover: " + getMinCover(path, n));
    }

    public int getMinCover(List<Integer> path[], int n){
        this.n = n;
        this.path = path;
        dp = new int[n][2];
        par = new int[n];
        for(int i=0; i<n; i++){
            Arrays.fill(dp[i], -1);
        }
        Arrays.fill(par, -1);

        return Integer.min(fun(0, 0), fun(0, 1));
    }

    public int fun(int i, int isCover){

        if(dp[i][isCover] == -1){
            int ans = 0;
            for(int u: path[i]){
                if(par[i] == u) continue;

                par[u] = i;

                if(isCover == 0){
                    ans += fun(u, 1);
                }
                else {
                    ans += (1 + Math.min(fun(u, 0), fun(u, 1)));
                }
            }
            dp[i][isCover] = ans;
        }

        return dp[i][isCover];
    }


}
