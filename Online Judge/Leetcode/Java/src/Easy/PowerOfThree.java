package Easy;

//leetcode - 326. Power of Three

public class PowerOfThree {

    public boolean isPowerOfThree(int n) {
        if(n <= 0) return false;

        double temp = (double) ((1.0 * Math.log(n))/(1.0 * Math.log(3)));
        //System.out.println(temp);
        temp = (double)Math.round(temp * 10000000000d) / 10000000000d;
        //System.out.println(temp);

        if(temp - (int) temp == 0){
            return true;
        }
        else{
            return false;
        }
    }
}
