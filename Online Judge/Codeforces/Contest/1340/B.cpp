#include<bits/stdc++.h>
using namespace std;

int divide(int ara[], int lo, int hi, int n){

    if(lo>hi)
        return 0;

    int  mid = (lo+hi)/2;

    if(mid>1 && ara[mid-1]<ara[mid] && mid<n && ara[mid+1]<ara[mid])
        return 1 + divide(ara, lo, mid-1, n) + divide(ara, mid+1, hi, n);
    else
        return divide(ara, lo, mid-1, n) + divide(ara, mid+1, hi, n);
}


int main(){
    int t;
    cin>>t;
    int n, k;
    int ara[200001];

    while(t--){
        scanf("%d %d", &n, &k);
        for(int i=1; i<=n; i++){
            scanf("%d", &ara[i]);
        }
        int mx = -1;
        int cnt, l;

        cnt = divide(ara, 2, k-1, n);
        mx = cnt;
        l = 1;
        int temp;


        for(int i=2; i<=n-k+1; i++){

            if(ara[i-1]<ara[i] && ara[i+1]<ara[i]){
                cnt--;
            }

            temp = i+k-2;

            if(ara[temp-1]<ara[temp] && ara[temp+1]<ara[temp]){
                cnt++;
            }


            if(cnt>mx){
                mx = cnt;
                l = i;
            }

        }

        printf("%d %d\n", mx+1, l);



    }
    return 0;
}
