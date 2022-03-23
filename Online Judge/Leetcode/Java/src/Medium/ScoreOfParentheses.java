package Medium;

public class ScoreOfParentheses {

    public int scoreOfParentheses(String s) {

        int length = s.length();
        int countLeft = 0;
        int storeLeft = 0;
        int sumScore = 0;
        int mulScore = 0;
        int temp = 1;

        for(int i=0; i<length; i++){
            if(s.charAt(i) == '(' && storeLeft == 0){
                temp = 1;
                countLeft++;
            }
            else if(s.charAt(i) == '(' && storeLeft > 0){
                storeLeft = countLeft;
                countLeft = 0;
                sumScore = mulScore;
                countLeft++;
            }
            else if(s.charAt(i) == ')' && countLeft > 0){
                mulScore = temp;
                temp *= 2;
                countLeft--;
            }
            else if(s.charAt(i) == ')' && countLeft == 0){
                sumScore += mulScore;
                temp = 1;
                storeLeft--;
            }
        }

        sumScore += mulScore;

        return sumScore;
    }

}
