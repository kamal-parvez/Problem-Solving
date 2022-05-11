package Medium;


//leetcode - 1828. Queries on Number of Points Inside a Circle

public class QueriesOnNumberOfPointsInsideCircle {

    public int[] countPoints(int[][] points, int[][] queries) {
        int totalQueries = queries.length;
        int totalPoints = points.length;
        int count;
        int[] ans = new int[totalQueries];

        for(int i=0; i<totalQueries; i++){
            count = 0;
            for(int j=0; j<totalPoints; j++){
                int temp = (points[j][0] - queries[i][0]) * (points[j][0] - queries[i][0]) + (points[j][1] - queries[i][1]) * (points[j][1] - queries[i][1]) - queries[i][2] * queries[i][2];
                if(temp <= 0) count++;
            }
            ans[i] = count;
        }

        return ans;
    }
}
