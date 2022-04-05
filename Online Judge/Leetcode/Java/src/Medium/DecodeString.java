package Medium;

//leetcode - 394. Decode String

public class DecodeString {

    String str;
    int l;

    public String decodeString(String s) {
        str = s;
        l = s.length();

        //code
        return "";
    }

    public void recFun(int i){

        int j = i;
        String temp = "";
        while (str.charAt(j) != '['){
            temp += str.charAt(j);
            j++;
        }
        int x = Integer.parseInt(temp);
        temp = "";
        j++;

        while (str.charAt(j) != ']'){
            temp += str.charAt(j);
        }

    }

}
