#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)
#define ephsilon .00001

//using newton-raphson method

double l, n, c, L;

double fun(double r){
    double temp = l/(2*r) - sin(L/(2*r));
    //cout<<"Fun : "<<temp<<endl;
    return temp;
}

double derFun(double r){
    double temp = (L/(2*r*r)) * (cos(L/(2*r))) - (l/(2*r*r));
    //cout<<"deri Fun : "<<temp<<endl;
    return temp;
}


int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>l>>n>>c;

        L = (1 + n*c) * l;
        //cout<<"L : "<<L<<endl;

        double temp;
        double r = 100;

        if(n == 0){
            printf("Case %d: 0\n", i);
            continue;
        }

        for(int j=0; j<500; j++){
            //cout<<"r : "<<r<<endl;
            temp = fun(r) / derFun(r);
            r = r - temp;

            if((abs(temp)) < ephsilon)
                break;
        }


        double res = r - sqrt(r*r - (l*l)/4);

        printf("Case %d: %.10lf\n", i, res);

    }
    return 0;
}


/*
   double low, mid, hi, r;
        low = -1;
        hi = 1500.0;

        for(int j=0; j<100; j++){
            mid = (hi + low)/2;
            printf("lo: %lf   mid: %lf   hi: %lf\n", low, mid, hi);
            r = mid;

            printf("flo: %.2lf   fmid: %.2lf   fhi: %.2lf\n", fun(low), fun(mid), fun(hi));

            if(fun(mid) == 0.0)
                break;
            else if(fun(mid) * fun(low) < 0){
                hi = mid;
            }
            else{
                low = mid;
            }
        }


        */


