#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[2000];

    while(t--){
        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }

        int a, b, c, flag = 0;

        for(int i=2; i<=n-1; i++){
            b = i;
            flag = 0;

            for(int j=1; j<i; j++){
                if(ara[j]<ara[i]){
                    flag = 1;
                    a = j;
                    break;
                }
            }
            if(flag == 0)
                continue;

            for(int j=i+1; j<=n; j++){
                if(ara[j]<ara[i]){
                    flag = 2;
                    c = j;
                    break;
                }
            }
            if(flag == 2)
                break;
        }
        if(flag == 2){
                printf("YES\n");
            printf("%d %d %d\n", a, b, c);
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
