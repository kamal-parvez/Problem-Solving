#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n, k, x;
    int ara[100001];
    while(t){

        scanf("%d", &n);
        memset(ara, 0, sizeof(ara));
        int flag, pos = -1;

        for(int i=1; i<=n; i++){
            scanf("%d", &k);
            flag = 0;
            for(int j=0; j<k; j++){
                scanf("%d", &x);
                if(ara[x] == 0 && flag == 0){
                    ara[x] = 1;
                    flag = 1;
                }
            }
            if(flag == 0){
                pos = i;
            }
        }

        if(pos == -1){
            printf("OPTIMAL\n");
        }
        else{
            printf("IMPROVE\n");
            for(int i=1; i<=n; i++){
                if(ara[i] == 0){
                    printf("%d %d\n", pos, i);
                    break;
                }
            }
        }


        t--;
    }
    return 0;
}
