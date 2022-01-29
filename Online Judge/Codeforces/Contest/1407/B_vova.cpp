#include<bits/stdc++.h>
using namespace std;


int fun(int a, int b){
    int c = 0;

    while(b){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}



int main(){
    int t;
    cin>>t;

    int n;
    int ara[1002];
    int tu[1002];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        sort(ara, ara+n);


        memset(tu, 0, sizeof(tu));

        int gcd = ara[n-1];
        tu[n-1] = 1;

        cout<<gcd;

        for(int i=1; i<n; i++){
            int x = 0;
            int z = 0;
            int kl = -1;

            for(int j=n-1; j>=0; j--){
                if(tu[j]==1){
                    continue;
                }

                int y = fun(gcd, ara[j]);
                if(x < y){
                    x = y;
                    z = ara[j];
                    kl = j;
                }
            }

            gcd = x;
            tu[kl] = 1;
            printf(" ");
            cout<<z;

        }
        cout<<endl;

    }
    return 0;
}

