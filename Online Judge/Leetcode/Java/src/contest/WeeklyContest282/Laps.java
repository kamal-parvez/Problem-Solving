package contest.WeeklyContest282;

public class Laps {

    public int minimumFinishTime(int[][] tires, int changeTime, int laps) {
        int n = tires.length;
        long[] mins = new long[50];
        for (int i = 1; i < 50; ++i) {
            mins[i] = 123456789012L;
        }

        mins[0] = changeTime;

        for (int i = 0; i < n; ++i) {
            long curr = tires[i][0];
            long ct = changeTime;
            for (int j = 1; j < 50; ++j) {
                if (curr>Integer.MAX_VALUE)
                    break;
                ct += curr;
                mins[j] = Math.min(mins[j],ct);
                curr *= tires[i][1];
            }
        }

        long[] best = new long[laps+1];
        for (int i = 0; i <= laps; ++i)
            best[i] = 1234567890123L;
        best[0] = -changeTime;
        for (int i = 0; i <= laps; ++i) {
            for (int j = 1; j < 50 && i-j>=0; ++j) {
                best[i] = Math.min(best[i], best[i-j]+mins[j]);
            }
            //System.out.println(i+" "+best[i]);
        }
        return (int)best[laps];
    }
}