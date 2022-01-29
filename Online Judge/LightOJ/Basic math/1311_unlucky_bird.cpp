#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        double v1, v2, v3, a1, a2;
        cin>>v1>>v2>>v3>>a1>>a2;

        double x = 0, y = 0, time1 = 0, time2 = 0, s;

        if(v1 > 0){
           time1 = v1/a1;
           x = v1*time1 - 0.5 * a1 * time1 * time1;
           s = time1*v3;
        }
        if(v2 > 0){
           time2 = v2/a2;
           y = v2*time2 - 0.5 * a2 * time2 * time2;
           s = time2*v3;
        }



        double d = x + y;

        printf("Case %d: %.10f %.10f\n", i, d, s);
    }

    return 0;
}
