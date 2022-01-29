#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100000];

    while(t){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int flag = 0;

        for(int i=0; i<n-1; i++){
            if(ara[i]<=ara[i+1]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

        t--;
    }
}
