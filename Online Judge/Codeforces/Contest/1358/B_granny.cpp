#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[200000];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        sort(ara, ara+n);

        int res = n+1;

        for(int i=n-1; i>=0; i--){
            if(ara[i] > i+1){
                res--;
            }
            else{
                break;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}

