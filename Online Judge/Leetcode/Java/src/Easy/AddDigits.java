package Easy;

//LeetCode - 258. Add Digits

public class AddDigits {
    public int addDigits(int num) {
        String str = Integer.toString(num);
        int size = str.length();
        int sum = num;

        while(size != 1){
            sum = 0;
            for(int i=0; i<size; i++){
                sum += Integer.parseInt(String.valueOf(str.charAt(i)));
            }
            System.out.println("Num : " + str + "  sum : " + sum);
            str = Integer.toString(sum);
            size = str.length();
        }


        return sum;
    }
}
