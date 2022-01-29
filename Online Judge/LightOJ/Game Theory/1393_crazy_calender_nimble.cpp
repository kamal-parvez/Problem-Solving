//gird deya ase...nimble type...

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int r, c;
    for(int cases=1; cases<=t; cases++){
        cin>>r>>c;
        int xorsum = 0, x;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                scanf("%d", &x);

                if(x%2==1){
                    xorsum = xorsum ^ (x*(r-i-1 + c-j-1)) ;
                }
            }
        }

        if(xorsum > 0)
            printf("Case %d: win\n", cases);
        else
            printf("Case %d: lose\n", cases);
    }
    return 0;
}

