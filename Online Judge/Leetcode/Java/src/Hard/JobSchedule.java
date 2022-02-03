package Hard;

//LeetCode - 1335 Minimum Difficulty of a Job Schedule

import java.util.Arrays;

public class JobSchedule {

    int scheduleLength;
    int totalDay;
    int dp[][];
    int jobDifficulty[];
    int remainingJobDif[];

    public JobSchedule() {
    }

    public int minDifficulty(int[] jobDifficulty, int d) {

        scheduleLength = jobDifficulty.length;

        //Impossible to do at least one task in each day
        if(scheduleLength < d){
            return -1;
        }

        this.jobDifficulty = jobDifficulty;
        totalDay = d;
        dp = new int[scheduleLength][d+1];
        for(int i=0; i<scheduleLength; i++){
            for(int j=0; j<d; j++){
                dp[i][j] = -1;
            }
        }


        //Make an array for remaining job difficulties.
        remainingJobDif = new int[scheduleLength];
        remainingJobDif[scheduleLength-1] = jobDifficulty[scheduleLength-1];
        for(int i=scheduleLength-2; i>=0; i--){
            remainingJobDif[i] = Math.max(remainingJobDif[i+1], jobDifficulty[i]);
        }

        return recFun(0, 0);
    }

    public int recFun(int startIndex, int day){
        //System.out.println("Start : " + startIndex + "  day : " + day);
        if(day == totalDay-1){
            //System.out.println("remain : " + remainingJobDif[startIndex]);
            return remainingJobDif[startIndex];
        }

        if(dp[startIndex][day] == -1) {
            int upTo = scheduleLength - (totalDay - day);
            int hardestTask = -1;
            int minDif = 1000000000;

            for (int i = startIndex; i <=upTo; i++) {
                hardestTask = Math.max(hardestTask, jobDifficulty[i]);
                //System.out.println("i : " + i + " hard : " + hardestTask);
                minDif =  Math.min(minDif, hardestTask + recFun(i + 1, day + 1));
                //System.out.println("MinDif : " + minDif);
            }

            dp[startIndex][day] = minDif;
        }

        return dp[startIndex][day];

    }
}
