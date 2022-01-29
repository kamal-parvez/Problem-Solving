#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    char ara[200000];
    int n, k;

    while(t--){
        cin>>n>>k;
        cin>>ara;
        //cout<<ara<<endl;

        int cnt = 0;
        int x = 0, y = 0;

        for(int i=0; i<=k; i++){
            if(ara[i] == '0'){
                x++;
            }
            else
                break;
        }
        if(x == k+1){
            cnt = 1;
            ara[0] = '1';
        }


        //printf("in  %d\n", cnt);
        x = 0;

        int flag = 0;

        for(int i=0; i<n; i++){
            if(ara[i] == '0'){
                x++;
            }
            else if(ara[i] == '1'){
                cnt += ((int)floor((x-1)/(2*k)));
                x = 0;
            }

            if(ara[i] == '1'){
                flag = 1;
            }
        }
        //printf("in123   %d\n", cnt);

        cnt += ((int)floor((x)/(1.0*(k+1))));


        if(flag == 0 && cnt == 0){
            cnt = 1;
        }

        cout<<cnt<<endl;

    }
    return 0;
}


