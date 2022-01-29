#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n;
    int ara[100001];
    int res[100001];
    int l;

    while(t--){
        cin>>n;

        int sum = 0;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        l = 1;
        res[0] = ara[0];

        for(int i=1; i<n-1; i++){
            if(abs(ara[i]-ara[i-1]) + abs(ara[i]-ara[i+1]) > abs(ara[i-1]-ara[i+1])){
                l++;
                res[l-1] = ara[i];
            }
        }
        l++;
        res[l-1] = ara[n-1];


        cout<<l<<endl;
        for(int i=0; i<l; i++){
            printf("%d", res[i]);
            if(i<l-1)
                printf(" ");
        }
        cout<<endl;
    }
    return 0;
}

