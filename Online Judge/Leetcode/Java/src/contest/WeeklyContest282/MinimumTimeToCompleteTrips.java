package contest.WeeklyContest282;

import java.util.Arrays;

public class MinimumTimeToCompleteTrips {

    public long minimumTime(int[] time, int totalTrips) {
        long low = 0;
        long hi = 100000000000000L, mid = 0;
        long trip;
        long res = 0;

        while(low <= hi){
            mid = (low + hi) / 2;
            trip = 0;

            //System.out.println("lo : " + low + "  mid : " + mid + "   hi : " + hi);

            for(int t : time){
                trip += ((long) mid/t);
            }

            //System.out.println("Trips : " + trip);

            if(trip >= totalTrips){
                res = mid;
                hi = mid - 1;
            }
            else if(trip < totalTrips){
                low = mid + 1;
            }

        }
        return  res;
    }
}
