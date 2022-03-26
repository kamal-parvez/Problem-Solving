package Easy;

//leetcode - 342. Power of Four

public class PowerOfFour {

    public boolean isPowerOfFour(int n) {
        if(n <= 0) return false;

        double temp = (double) ((1.0 * Math.log(n))/(1.0 * Math.log(4)));
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
