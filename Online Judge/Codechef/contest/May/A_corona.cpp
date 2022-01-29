#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[10];

    int mn, mx;

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        mn = 200;
        mx = -1;
        int cnt;

        for(int i=0; i<n; i++){
            cnt = 1;
            for(int j=i; j>0; j--){
                if(ara[j]-ara[j-1] <= 2){
                    cnt++;
                }
                else{
                    break;
                }
            }

            for(int j=i; j<n-1; j++){
                if(ara[j+1]-ara[j] <= 2){
                    cnt++;
                }
                else{
                    break;
                }
            }
            mn = min(mn, cnt);
            mx = max(mx, cnt);
        }

        printf("%d %d\n", mn, mx);
    }
    return 0;
}
