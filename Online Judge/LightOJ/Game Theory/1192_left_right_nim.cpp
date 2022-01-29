#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int k;
    for(int cases=1; cases<=t; cases++){
        cin>>k;
        int xorsum = 0, g, w;
        for(int i=0; i<k; i++){
            scanf("%d %d", &g, &w);
            xorsum = xorsum ^ (w-g-1);
        }

        if(xorsum > 0)
            printf("Case %d: Alice\n", cases);
        else
            printf("Case %d: Bob\n", cases);
    }
    return 0;
}
