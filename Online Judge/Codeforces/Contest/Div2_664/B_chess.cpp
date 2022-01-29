#include<bits/stdc++.h>
using namespace std;


int main(){

    int n, m, x, y;
    int ara[102][102];

    cin>>n>>m>>x>>y;
    memset(ara, 0, sizeof(ara));

    ara[x][y] = 1;
    printf("%d %d\n", x, y);

    ara[x][m] = 1;
    printf("%d %d\n", x, m);

    for(int i=m; i>0; i--){
        if(ara[x][i] == 1)
            continue;

        ara[x][i] = 1;
        printf("%d %d\n", x, i);
    }

    int am = 1;

    for(int i=1; i<=n; i++){

        if(i == x)
            continue;

        if(am%2==1){
            for(int j=1; j<=m; j++){
                printf("%d %d\n", i, j);
            }
            am++;
        }
        else{
            for(int j=m; j>0; j--){
                printf("%d %d\n", i, j);
            }
            am++;
        }
    }

    return 0;
}

