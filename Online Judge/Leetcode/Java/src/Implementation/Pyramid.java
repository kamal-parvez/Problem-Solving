package Implementation;

public class Pyramid {

    public void makePyramid(int n){
        for(int i=1; i<=n; i++){
            //Space
            for(int j=0; j<n-i; j++){
                System.out.print("  ");
            }
            //Front number
            for(int j=1; j<=i; j++){
                System.out.print(j + " ");
            }
            //Rear Number
            for(int j=i-1; j>=1; j--){
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
