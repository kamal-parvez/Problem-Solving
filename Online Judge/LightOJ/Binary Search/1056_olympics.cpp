#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int r1, r2;
        scanf("%d : %d", &r1, &r2);
        //printf("%d %d\n", r1, r2);

        double x, rad,length, width, arc, perimeter;
        double lo, mid, hi;
        lo = 0;
        hi = 10000000;

        for(int j=0; j<500; j++){
            mid = (lo+hi)/2;

            x = mid;
            length = r1*x;
            width = r2*x;

            rad = sqrt((length/2) * (length/2) +  (width/2) * (width/2));

            arc = asin(width/(2*rad)) * 2 * rad;

            perimeter = 2*length + 2*arc;

            if(perimeter == 400)
                break;
            else if(perimeter < 400){
                lo = mid;
            }
            else{
                hi = mid;
            }
        }

        printf("Case %d: %.10lf %.10lf\n", i, length, width);
    }
    return 0;
}
