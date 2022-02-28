package Hard;

//Leetcode - 847. Shortest Path Visiting All Nodes

import java.util.Arrays;

public class ShortestPathVisitingAllNodes {

    public int shortestPathLength(int[][] graph) {

        int node = graph.length;
        boolean[] visited = new boolean[node];
        for(int i=0; i<node; i++){
            Arrays.fill(visited, false);
            int current = i;

            while (true){
                int curNodeSize = graph[current].length;
                for(int j=0; j<curNodeSize; j++){
                    if(!visited[graph[i][j]]){
                        
                    }
                }
            }
        }

        return 0;
    }
}
