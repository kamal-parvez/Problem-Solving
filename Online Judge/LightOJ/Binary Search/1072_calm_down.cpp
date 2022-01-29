#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)


int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        double r;
        int n;
        cin>>r>>n;

        double res = (r * sin(pi/n)) / (1 + sin(pi/n));
        printf("Case %d: %.10lf\n", i, res);
    }
    return 0;
}
