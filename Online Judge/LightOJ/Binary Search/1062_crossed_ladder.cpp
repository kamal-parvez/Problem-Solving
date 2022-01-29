#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int cases=1; cases<=t; cases++){
        double x, y, c, width;
        scanf("%lf %lf %lf", &x, &y, &c);

        double lo, hi, mid;
        double x1, y1, x2, y2, x3, y3, x4, y4, p1, p2;
        lo = 0;
        hi = max(x, y);

        for(int i=0; i<500; i++){
            mid = (lo+hi)/2;
            //printf("lo: %lf  mid: %lf   hi: %lf\n", lo, mid, hi);

            if(mid > min(x, y)){
                hi = mid;
                continue;
            }

            x1 = 0;
            y1 = sqrt(x*x - mid*mid);
            x2 = mid;
            y2 = 0;

            x3 = 0;
            y3 = 0;
            x4 = mid;
            y4 = sqrt(y*y - mid*mid);

            p2 = (y1*x2*y4)/(x4*y1+x2*y4);

            //printf("x1: %lf  y1: %lf   x2: %lf   y2: %lf\n", x1, y1, x2, y2);
            //printf("x3: %lf  y3: %lf   x4: %lf   y4: %lf\n", x3, y3, x4, y4);

            //cout<<"p : "<<p2<<endl;
            width = mid;

            if(p2 == c){
                width = mid;
                break;
            }
            else if(p2<c){
                hi = mid;
            }
            else if(p2>c){
                lo = mid;
            }
        }

        printf("Case %d: %.10lf\n", cases, width);
    }
    return 0;
}
