#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, k;
    cin>>t;
    int ara[101];
    for(int cases=1; cases<=t; cases++){

        cin>>k;
        int flag = 0;
        for(int i=0; i<k; i++){
            scanf("%d", &ara[i]);
            if(ara[i] != 1)
                flag = 1;
        }

        if(flag == 0){
            if(k%2 == 0)
                printf("Case %d: Alice\n", cases);
            else
                printf("Case %d: Bob\n", cases);

            continue;
        }

        int xorsum = 0;

        for(int i=0; i<k; i++){
            xorsum = xorsum ^ ara[i];
        }

        if(xorsum > 0)
            printf("Case %d: Alice\n", cases);
        else
            printf("Case %d: Bob\n", cases);
    }
}
