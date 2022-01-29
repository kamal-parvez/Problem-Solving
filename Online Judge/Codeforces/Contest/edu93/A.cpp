#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[50001];

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        if(ara[0] + ara[1] <= ara[n-1]){
            printf("1 2 %d\n", n);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
