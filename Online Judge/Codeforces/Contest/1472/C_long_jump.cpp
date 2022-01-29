#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    int n;
    int ara[200002];
    int res[200002];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        memset(res, 0, sizeof(res));

        for(int i=0; i<n; i++){
            res[i] += ara[i];

            if(i+ ara[i] < n){
                res[i+ara[i]] = max(res[i+ara[i]], res[i]);
            }
        }

        int mx = -1;

        for(int i=0; i<n; i++){
            mx = max(mx, res[i]);
        }

        cout<<mx<<endl;

    }
}
