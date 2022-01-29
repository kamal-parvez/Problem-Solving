#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100002];

    while(t--){
        cin>>n;
        int res = 0;
        for(int i=0; i<n; i++){
            cin>>ara[i];
            //res = res ^ ara[i];
        }
        //printf("EX : %d\n", res);

        int flag = 0;
        int second;

        for(int i=0; i<n; i++){
            if(ara[i] == 1 && i != n-1){
                if(flag == 0){
                    flag = 1;
                }
                else{
                    flag = 0;
                }
            }
        }

        if(flag == 0){
            printf("First\n");
        }
        else{
            printf("Second\n");
        }


    }
    return 0;
}

