#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100001];

    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            scanf("%d", &ara[i]);
        }

        int flag = 0;

        for(int i=1; i<n; i++){

            if(ara[i] < ara[i+1] && ara[i+1]-ara[i] !=1){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }


    }
    return 0;
}
