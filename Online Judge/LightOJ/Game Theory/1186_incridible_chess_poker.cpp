//nim game.......poker type

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n;
    int white[101], black[101];

    for(int cases=1; cases<=t; cases++){
        cin>>n;
        for(int i=0; i<n; i++){
            scanf("%d", &white[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%d", &black[i]);
        }

        int xorsum = 0;
        for(int i=0; i<n; i++){
            xorsum = xorsum ^ (black[i] - white[i]-1);
        }
        if(xorsum > 0)
            printf("Case %d: white wins\n", cases);
        else
            printf("Case %d: black wins\n", cases);
    }
    return 0;
}
