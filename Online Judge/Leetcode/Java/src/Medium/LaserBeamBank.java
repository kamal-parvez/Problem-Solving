package Medium;

//leetcode - 2125. Number of Laser Beams in a Bank

public class LaserBeamBank {

    public int numberOfBeams(String[] bank) {
        int row = bank.length;
        int ans = 0;
        int countPrev = 0, countCur = 0;

        for(int i=0; i<row; i++){
            int col = bank[i].length();
            for(int j=0; j<col; j++){
                if(bank[i].charAt(j) == '1') countCur++;
            }

            if(countCur == 0) continue;
            ans += (countCur * countPrev);
            countPrev = countCur;
            countCur = 0;
        }

        return ans;
    }
}
