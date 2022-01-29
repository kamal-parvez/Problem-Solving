#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100];

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        sort(ara, ara+n);



        int res = 10000000;

        for(int i=0; i<n-1; i++){
            res = min(res, ara[i+1]-ara[i]);
        }

        cout<<res<<endl;

    }
    return 0;
}

