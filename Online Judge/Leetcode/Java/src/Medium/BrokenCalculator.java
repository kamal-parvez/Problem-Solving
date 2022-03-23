package Medium;

//Leetcode - 991. Broken Calculator

public class BrokenCalculator {


    public int brokenCalc(int startValue, int target) {

        int minOP = 0;

        while (target != startValue){
            if(target > startValue && target % 2 == 0){
                minOP++;
                target /= 2;
            }
            else {
                minOP++;
                target += 1;
            }
        }

        return minOP;
    }



}
