package Medium;

//leetcode - 881. Boats to Save People

import java.util.Arrays;

public class BoatsToSavePeople {

    public int numRescueBoats(int[] people, int limit) {
        int minBoat = 0;
        Arrays.sort(people);
        int i = 0;
        int j = people.length - 1;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                minBoat++;
                i++;
                j--;
            }
            else {
                minBoat++;
                j--;
            }
        }

        return minBoat;
    }
}
