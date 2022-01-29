#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main(){
    int t;

    //cout<<log(7)/log(2);
    cin>>t;

    int n;
    int ara[100002];
    int cnt[40];

    while(t){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int flag = 0;
        memset(cnt, 0, sizeof(cnt));

        for(int i=0; i<n; i++){
            int x = (int) floor(log2(ara[i])*1.0);
            x++;
            cnt[x]++;
            //cout<<x<<endl;
        }

        long long int res = 0;
        int k;

        for(int i=1; i<35; i++){
            //printf("cnt: %d\n", cnt[i]);
            if(cnt[i]>1){
                if(cnt[i]%2==0){
                    k = cnt[i]/2;
                    res += (long long int) (k * (cnt[i]-1));
                }
                else{
                    k = (cnt[i]-1)/2;
                    res += (long long int) (k * (cnt[i]));
                }
            }
            //cout<<res<<endl;
        }

        cout<<res<<endl;

        t--;
    }
}

