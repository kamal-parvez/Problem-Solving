public class ZobayerHasanBlog {


    //Print reverse Order
    public void printReverseOrder(int ara[], int i){
        if(i<0) return;

        System.out.print(ara[i] + "  ");
        printReverseOrder(ara, i-1);
    }

    //print an array in the following order. [0] [n-1] [1] [n-2] ......... ......... [(n-1)/2] [n/2]
    public void printDiffOrder(int[] ara, int i, int j){
        if(i > j) return;
        System.out.println(ara[i] + "  " + ara[j]);
        printDiffOrder(ara, i+1, j-1);
    }



}
