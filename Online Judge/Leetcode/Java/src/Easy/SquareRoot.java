package Easy;

//Leetcode - 69. Sqrt(x)

public class SquareRoot {
    public int mySqrt(int x) {
        long low = 0, mid, hi = 46340;
        int res = 0;
        long num = x;

        while(low <= hi){
            mid = (low + hi)/2;
            //System.out.println("l : " + low + "  m: " + mid + "   hi: " + hi);
            if(mid * mid == num || (mid * mid < x && (mid+1) * (mid+1) > num)){
                res = (int) mid;
                break;
            }
            else if(mid * mid > num){
                hi = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return res;
    }
}

