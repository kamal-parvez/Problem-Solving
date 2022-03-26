package Easy;

//leetcode - 231. Power of Two


public class PowerOfTwo {

    public boolean isPowerOfTwo(int n) {
        if(n <= 0) return false;

        double temp = (double) ((1.0 * Math.log(n))/(1.0 * Math.log(2)));
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
