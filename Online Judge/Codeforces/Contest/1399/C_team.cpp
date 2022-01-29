#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[60];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        sort(ara, ara+n);
        int temp[60];
        int cnt;
        int mx = -1;

        for(int i=2; i<=2*n; i++){
            memset(temp, 0, sizeof(temp));
            cnt = 0;
            for(int j=0; j<n; j++){
                if(temp[j]==1){
                    continue;
                }
                for(int k=0; k<n; k++){
                    if(j != k && temp[k]==0 && ara[j]+ara[k]==i){
                        temp[j] = 1;
                        temp[k] = 1;
                        cnt++;
                        break;
                    }
                }
            }
            //printf("w: %d    cnt: %d\n", i, cnt);
            if(mx<cnt){
                mx = cnt;
            }
        }
        cout<<mx<<endl;

    }
    return 0;
}


