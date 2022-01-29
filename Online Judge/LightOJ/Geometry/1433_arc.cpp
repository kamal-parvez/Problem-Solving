#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int ox, oy, ax, ay, bx, by;
    for(int i=1; i<=t; i++){
        scanf("%d %d %d %d %d %d", &ox, &oy, &ax, &ay, &bx, &by);

        double oa = sqrt((ox-ax) * (ox-ax) + (oy-ay) * (oy-ay));
        double ab = sqrt((bx-ax) * (bx-ax) + (by-ay) * (by-ay));
        double bd = (ab / 2.0);

        double theta = asin(bd/oa);

        double ans = oa * theta * 2;

        printf("Case %d: %0.10lf\n", i, ans);
    }
    return 0;
}
