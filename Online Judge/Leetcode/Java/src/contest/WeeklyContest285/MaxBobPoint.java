package contest.WeeklyContest285;


//Leetcode - 2212. Maximum Points in an Archery Competition

public class MaxBobPoint {
    public int[] maximumBobPoints(int numArrows, int[] aliceArrows) {

        int[] bobArrows = new int[12];
        int[] tempArrows = new int[12];
        int maxPoint = -1;
        int sumPoint = 0;
        int countArrow = 0;

        for(int a=0; a<2; a++){
            tempArrows[1] = point(aliceArrows, 1, a);
            for(int b=0; b<2; b++){
                tempArrows[2] = point(aliceArrows, 2, b);
                for(int c=0; c<2; c++){
                    tempArrows[3] = point(aliceArrows, 3, c);
                    for(int d=0; d<2; d++){
                        tempArrows[4] = point(aliceArrows, 4, d);
                        for(int e=0; e<2; e++){
                            tempArrows[5] = point(aliceArrows, 5, e);
                            for(int f=0; f<2; f++){
                                tempArrows[6] = point(aliceArrows, 6, f);
                                for(int g=0; g<2; g++){
                                    tempArrows[7] = point(aliceArrows, 7, g);
                                    for(int h=0; h<2; h++){
                                        tempArrows[8] = point(aliceArrows, 8, h);
                                        for(int i=0; i<2; i++){
                                            tempArrows[9] = point(aliceArrows, 9, i);
                                            for(int j=0; j<2; j++){
                                                tempArrows[10] = point(aliceArrows, 10, j);
                                                for(int k=0; k<2; k++){
                                                    tempArrows[11] = point(aliceArrows, 11, k);

                                                    sumPoint = 0;
                                                    countArrow = 0;

                                                    for(int x = 1; x<=11; x++){
                                                        if(tempArrows[x] > aliceArrows[x]){
                                                            sumPoint += x;
                                                        }
                                                        countArrow += tempArrows[x];
                                                    }

                                                    if(sumPoint > maxPoint && countArrow <= numArrows){
                                                        maxPoint = sumPoint;
                                                        for(int x = 1; x<=11; x++){
                                                            bobArrows[x] = tempArrows[x];
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        countArrow = 0;

        for(int x = 1; x<=11; x++){
            countArrow += bobArrows[x];
        }

        bobArrows[0] = numArrows - countArrow;

        return bobArrows;

    }

    public int point(int[] aliceArrow, int index, int flag){
        if(flag == 0){
            return 0;
        }
        else{
            return aliceArrow[index] + 1;
        }
    }
}


