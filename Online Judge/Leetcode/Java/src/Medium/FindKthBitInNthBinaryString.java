package Medium;


//leetcode - 1545. Find Kth Bit in Nth Binary String

public class FindKthBitInNthBinaryString {

    public char findKthBit(int n, int k) {
        String str = "0";
        str = recFun(n, str);

        return str.charAt(k-1);
    }

    public String recFun(int n, String str){
        if(n == 1){
            return str;
        }

        str = str + "1" + reverse(invert(str));

        return recFun(n-1, str);
    }

    public String invert(String str){
        str = str.replace('1', '2');
        str = str.replace('0', '1');
        str = str.replace('2', '0');

        return str;
    }

    public StringBuilder reverse(String str){
        return new StringBuilder().append(str).reverse();
    }
}
