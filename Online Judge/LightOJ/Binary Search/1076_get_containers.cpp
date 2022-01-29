#include<bits/stdc++.h>
using namespace std;


int get_max(int ara[], int n){
    int mx = -1;
    for(int i=0; i<n; i++){
        mx = max(ara[i], mx);
    }
    return mx;
}



int main(){
    int t;
    cin>>t;
    int ara[1005];
    //int con[2005];
    for(int j=1; j<=t; j++){

        int n, m;
        //cin>>n>>m;
        scanf("%d %d", &n, &m);
        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }



        int lo = 1, hi = 1000000000, mid, res = 1000000000;
        if(n<m){
            res = get_max(ara, n);
        }
        else{
        //cout<<hi<<endl;
            while(lo<=hi){
                mid = (lo + hi)/2;
                //printf("lo : %d   hi : %d   mid: %d\n", lo, hi, mid);

                int cnt = 1, temp = 0;
                //memset(con, 0, sizeof(con));
                int i;
                for(i=0; i<n; i++){
                    if(ara[i]>mid){
                        break;
                    }
                    if(temp+ara[i] <= mid){
                        temp += ara[i];
                    }
                    else{
                        cnt++;
                        i--;
                        temp = 0;
                    }
                }
                if(ara[i]>mid){
                        lo = mid+1;
                        continue;
                }
                if(cnt == m){
                    hi = mid-1;
                    res = min(res, mid);
                    //res = mid;
                    //break;
                }
                else if(cnt < m){
                    res = min(res, mid);
                    hi = mid - 1;
                }
                else if(cnt > m){
                    lo = mid + 1;
                }
            }
        }
        printf("Case %d: %d\n", j, res);


    }
    return 0;
}

