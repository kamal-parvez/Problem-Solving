package Medium;

//leetcode - 1823. Find the Winner of the Circular Game

public class FindWinnerCircularGame {

    int[] ara;
    
    public int findTheWinner(int n, int k) {
        ara = new int[n];
        for(int i=0; i<n; i++){
            ara[i] = i+1;
        }
        
        int person = n;
        int index = 0;
        int eliminate = -1;
        
        while (person != 1){
            int temp = 0;
            
            while (temp != k){
                if(ara[index] != eliminate){
                    temp++;
                    index = (index + 1) % n;
                }
            }
            
            while (ara[index] == eliminate){
                index++;
            }
            
            ara[index] = eliminate;
            person--;
        }
        int res = 0;
        
        for(int i=0; i<n; i++){
            if(ara[i] != eliminate){
                res = ara[i];
            }
        }
        
        return res;
    }
    
}
