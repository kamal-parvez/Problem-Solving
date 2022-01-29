#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, m;
    int ara[400][400];

    while(t--){
        cin>>n>>m;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ara[i][j];
            }
        }
        int flag = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i==0 || i==n-1) && (j==0 || j==m-1)){
                    if(ara[i][j]>2){
                        flag = 1;
                        break;
                    }
                    ara[i][j] = 2;
                }
                else if((i==0 || i==n-1) || (j==0 || j==m-1)){
                    if(ara[i][j]>3){
                        flag = 1;
                        break;
                    }
                    ara[i][j] = 3;
                }
                else{
                    if(ara[i][j]>4){
                        flag = 1;
                        break;
                    }
                    ara[i][j] = 4;
                }


            }
            if(flag == 1){
                break;
            }
        }

        if(flag == 1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    printf("%d", ara[i][j]);
                    if(j < m-1){
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}

