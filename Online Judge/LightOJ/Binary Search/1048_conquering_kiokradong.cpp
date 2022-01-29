#include<bits/stdc++.h>
using namespace std;


int ara[1002];
int night[302];
int temp[302];
int n, k, res;


int path(int x){
    int cnt = 0;
    memset(temp, 0, sizeof(temp));

    for(int i=0; i<=n;){
        if(x < ara[i]){
            return k+13;
        }
        if(temp[cnt] + ara[i] <= x){
            temp[cnt] += ara[i];
            if(n-i == k-cnt){
                cnt++;
            }
            i++;

        }else{
            cnt++;
        }
    }
    return cnt;
}

void copy_path(){
    for(int i=0; i<=k; i++){
        night[i] = temp[i];
    }
}


void keep_track(){
    int flag = 0;
    for(int i=0; i<=k; i++){
        if(night[i]<temp[i]){
            flag = 1;
            break;
        }
        else if(night[i]>temp[i]){
            flag = 2;
            break;
        }
    }
    if(flag == 1){
        copy_path();
    }
}





int main(){
    int t;
    cin>>t;

    for(int cases=1; cases<=t; cases++){
        cin>>n>>k;
        int mx = -1;
        for(int i=0; i<=n; i++){
            scanf("%d", &ara[i]);
            mx = max(mx, ara[i]);
        }

        if(n == k){
            printf("Case %d: %d\n", cases, mx);
            for(int i=0; i<=k; i++){
                printf("%d\n", ara[i]);
            }
            continue;
        }

        int lo=0, hi=100000000, mid;
        res = hi;
        memset(night, -1, sizeof(night));

        while(lo<=hi){
            mid = (lo+hi)/2;
            printf("lo: %d   mid: %d   hi: %d\n", lo, mid, hi);
            int x = path(mid);

            if(x==k){
                hi = mid - 1;
                if(res == mid){
                    keep_track();
                }else if(res > mid){
                    res = mid;
                    copy_path();
                }
            }
            else if(x>k){
                lo = mid + 1;
            }
            else if(x<k){
                hi = mid - 1;
            }
        }

        printf("Case %d: %d\n", cases, res);
        for(int i=0; i<=k; i++){
            printf("%d\n", night[i]);
        }
    }
    return 0;
}
