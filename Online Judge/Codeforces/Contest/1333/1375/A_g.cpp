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

        for(int i=0; i<n-2;){

            if(ara[i+1]-ara[i] == 0  || ara[i+2]-ara[i+1] == 0){
                i += 2;
                continue;
            }
            else if(ara[i+1]-ara[i] > 0  && ara[i+2]-ara[i+1] > 0){

                if(ara[i+1]*(-1) - ara[i] > 0  && (ara[i+2] - ara[i+1]*(-1) < 0)){
                    ara[i+1] *= (-1);
                }
                else if(ara[i+1]*(-1) - ara[i] < 0  && (ara[i+2] - ara[i+1]*(-1) > 0)){
                    ara[i+1] *= (-1);
                }
                else{
                    ara[i+2] *= (-1);
                    ara[i+1] *= (-1);
                }
            }
            if(ara[i+1]-ara[i] < 0  && ara[i+2]-ara[i+1] < 0){

                if(ara[i+1]*(-1) - ara[i] > 0  && (ara[i+2] - ara[i+1]*(-1) < 0)){
                    ara[i+1] *= (-1);
                }
                else if(ara[i+1]*(-1) - ara[i] < 0  && (ara[i+2] - ara[i+1]*(-1) > 0)){
                    ara[i+1] *= (-1);
                }
                else{
                    ara[i+2] *= (-1);
                    ara[i+1] *= (-1);
                }
            }
            i += 2;
        }

        for(int i=0; i<n; i++){
            printf("%d", ara[i]);
            if(i<n-1){
                printf(" ");
            }
        }
        cout<<endl;
    }
    return 0;
}
