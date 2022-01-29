#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n, k;
    int ara[200000];
    while(t--){
        cin>>n>>k;
        long long int sum = 0;

        for(int i=0; i<n; i++){
            cin>>ara[i];
            sum += ara[i];
        }

        int a = n/2;
        long long int x = sum/a;
        int cnt = 0;

        for(int i=0; i<a; i++){
            if(ara[i] + ara[n-i-1] != x){
                cnt ++;
            }
        }


        cout<<cnt<<endl;
    }
    return 0;
}

