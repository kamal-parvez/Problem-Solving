#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;
    int m, n;
    int ara[51][51];
    for(int i=1; i<=t; i++){
        scanf("%d %d", &m, &n);
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                scanf("%d", &ara[j][k]);
            }
        }

        int xorsum = 0, pile;

        for(int j=0; j<m; j++){
            pile = 0;
            for(int k=0; k<n; k++){
                pile += ara[j][k] ;
            }

            xorsum = xorsum ^ pile;
        }

        if(xorsum == 0)
            printf("Case %d: Bob\n", i);
        else
            printf("Case %d: Alice\n", i);


    }
    return 0;
}
