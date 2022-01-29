#include<bits/stdc++.h>
using namespace std;


double ab, ac, bc, rat;
double ae, ce, de, ad, bd;

void cal_side(double mid){
    ad = mid;
    ae = (ad/ab)*ac;
    de = (ad/ab)*bc;
    ce = ac - ae;
    bd = ab - ad;
}

double area_tri(double a, double b, double c){
    double s = (a+b+c)/2;
    double area = s * (s-a) * (s-b) * (s-c);

    return sqrt(area);
}

double area_trap(){
    double bx = de, ex = bd;
    double cx = bc - bx;

    double area = area_tri(ce, ex, cx);
    double h = (area*2)/cx;

    return 0.5 * h * (de + bc);
}



int main(){
    int t;
    cin>>t;
    for(int j=1; j<=t; j++){


        cin>>ab>>ac>>bc>>rat;

        double lo = 0, hi = ab, mid, temp;

        for(int i=0; i<400; i++){
            mid = (lo + hi)/2;

            cal_side(mid);
            temp = area_tri(ad, de, ae) / area_trap();

            if(temp == rat){
                break;
            }
            else if(temp < rat){
                lo = mid;
            }
            else{
                hi = mid;
            }

        }

        printf("Case %d: %.10lf\n", j, ad);

    }
    return 0;
}
