#include<bits/stdc++.h>
using namespace std;

int n, k;
int ara[20];

int coin(int i, int amount){
    if(i>=n){
        if(amount == k)
            return 1;
        return 0;
    }

    int ret1 = 0, ret2 = 0, ret3 = 0;

    if(amount + ara[i] <= k)
        ret1 = coin(i+1, amount + ara[i]);
    if(amount + 2*ara[i] <= k)
        ret2 = coin(i+1, amount + 2*ara[i]);
    ret3 = coin(i+1, amount);

    return ret1 | ret2 | ret3;
}


int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }

        if(coin(0, 0) == 1)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
