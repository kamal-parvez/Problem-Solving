#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, k;

    while(t--){
        cin>>n>>k;

        int sq = sqrt(n);
        int res = n;

        if(n<=k){
            printf("1\n");
        }

        else if(k==1){
            printf("%d\n", n);
        }

        else{
            for(int i=2; i<=sq; i++){
                if(n%i==0){
                    if(n/i<=k){
                        res = i;
                        break;
                    }
                    else if(i<=k){
                        res = n/i;
                    }
                }
            }

            printf("%d\n", res);
        }

    }
    return 0;
}



