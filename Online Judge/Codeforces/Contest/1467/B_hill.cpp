#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int n;
    int ara[300000];
    int marker[300000];

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int cnt_hill = 0;
        int cnt_val = 0;
        memset(marker, 0, sizeof(marker));

        for(int i=1; i<n-1; i++){
            if(ara[i] > ara[i+1] && ara[i] > ara[i-1]){
                cnt_hill++;
                marker[i] = 1;
            }

            else if(ara[i] < ara[i+1] && ara[i] < ara[i-1]){
                cnt_val++;
                marker[i] = 2;
            }
        }

        int mx = 0;

        for(int i=1; i<n-1; i++){
            if(marker[i-1] == 1 && marker[i]==2 && marker[i+1]==1){
                mx = max(mx, 3);
                break;
            }

            else if(marker[i-1] == 2 && marker[i]==1 && marker[i+1]==2){
                mx = max(mx, 3);
                break;
            }

            else if(marker[i-1] == 1 && marker[i]==2){
                mx = max(mx, 2);
            }

            else if(marker[i-1] == 2 && marker[i]==1){
                mx = max(mx, 2);
            }
            else{
                mx = max(mx, 1);;
            }
        }


        cout<<cnt_hill + cnt_val - mx<<endl;
    }
}

