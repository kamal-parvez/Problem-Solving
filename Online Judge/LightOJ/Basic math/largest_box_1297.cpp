#include<bits/stdc++.h>
using namespace std;


int main(){
    int testCase;
    cin>>testCase;
    double l, w;
    double volume;

    for(int i=1; i<=testCase; i++){
        cin>>l>>w;

        double det = (l+w) * (l+w) - 3 * l * w;

        if(det < 0){
            volume = 0;
            printf("Case %d: %f\n", i, volume);
        }
        else{
            double x1 = ( (l+w) + sqrt(det) )/6;
            double x2 = ( (l+w) - sqrt(det) )/6;

            double volume1 = (l-2*x1) * (w-2*x1) * x1;
            double volume2 = (l-2*x2) * (w-2*x2) * x2;
            volume = max(volume1, volume2);
            printf("Case %d: %.10f\n", i, volume);
        }

    }
    return 0;
}

