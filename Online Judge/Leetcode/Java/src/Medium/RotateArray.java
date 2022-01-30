package Medium;

public class RotateArray {

    public RotateArray() {
    }

    public void rotate(int[] nums, int k) {

        int size = nums.length;
        int ara[] = new int[size];
        k = k%size;

        for(int i=0; i<size; i++){
            ara[i] = nums[(size - k + i) % size];
        }

        for(int i=0; i<size; i++){
            nums[i] = ara[i];
        }

//        for(int i=0; i<size; i++){
//            System.out.print(ara[i] + "   ");
//        }


    }
}
