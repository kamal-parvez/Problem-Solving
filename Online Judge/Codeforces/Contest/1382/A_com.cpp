#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, m;
    int ara1[1002];
    int ara2[1002];
    int cnt1[1001];

    while(t--){
        cin>>n>>m;
        memset(cnt1, 0, sizeof(cnt1));
        for(int i=0; i<n; i++){
            cin>>ara1[i];
            cnt1[ara1[i]]++;
        }
        for(int i=0; i<m; i++){
            cin>>ara2[i];
        }

        int res = -1;

        for(int i=0; i<m; i++){
            if(cnt1[ara2[i]] > 0){
                res = ara2[i];
                break;
            }
        }
        if(res != -1){
            printf("YES\n1 %d\n", res);
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
