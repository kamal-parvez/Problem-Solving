#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n, z, k;
    int ara[100002];

    while(t--){
        cin>>n>>k>>z;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int l = 0, r = 0, in = 0;
        int val = ara[0];

        for(int i=0; i<k; i++){
            if(in==0){
                in++;
                val += ara[in];
            }
            else if(ara[in-1]>ara[in+1]){
                in--;
                val += ara[in];
            }
            else{

            }
        }
    }
    return 0;
}

