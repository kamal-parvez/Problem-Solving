#include<bits/stdc++.h>
using namespace std;

int n, k;
int ara[1010];
int ans[400];
int temp[400];
int final_camp;
int min_mx;


int possible_campsite(int mx){

    int sum = 0;
    int temp_index = 0;

    for(int i=0; i<=n; i++){

        if(ara[i]>mx){
            return -1;
        }
        if(sum + ara[i] <= mx){
            sum += ara[i];
        }
        else{
            temp[temp_index] = sum;
            //cout<<sum<<endl;
            sum = 0;
            i--;
            temp_index++;
        }
    }
    if(sum != 0){
        temp[temp_index] = sum;
        //cout<<sum<<endl;
        temp_index++;
    }

    return temp_index;
}

void copy_ans(int sz){

    int mx = -1;
    for(int i=0; i<sz; i++){
        if(temp[i]>mx)
            mx = temp[i];
    }

    if(mx<min_mx){
        min_mx = mx;
        for(int i=0; i<sz; i++){
            ans[i] = temp[i];
        }
    }
    else if(mx == min_mx){
        for(int i=0; i<sz; i++){
            if(ans[i] > temp[i]){
                break;
            }
            else if(ans[i] < temp[i]){
                for(int j=0; j<sz; j++){
                    ans[j] = temp[j];
                }
                break;
            }
        }
    }
}




void bin_search(){
    int lo  =   0;
    int hi  =   100000000;
    int mid;

    while(lo<=hi){
        mid =   (lo+hi)/2;
        //printf("Lo: %d    mid: %d    hi: %d\n", lo, mid, hi);

        int camp = possible_campsite(mid);
        //printf("Camp: %d\n", camp);

        if(camp == - 1){
            lo = mid + 1;
            continue;
        }

        if(camp == k+1){
            final_camp = camp;
            copy_ans(camp);
            hi = mid - 1;
        }
        if(camp < k+1){
            if(final_camp != k+1){
                final_camp = camp;
                copy_ans(camp);
            }
            hi = mid - 1;
        }
        if(camp > k+1){
            lo = mid + 1;
        }
    }
}



int main(){
    //freopen ("input.txt","r",stdin);
    int t;
    scanf("%d", &t);

    for(int cases=1; cases<=t; cases++){
        scanf("%d %d", &n, &k);
        for(int i=0; i<=n; i++){
            scanf("%d", &ara[i]);
        }

        final_camp = 10000;
        min_mx = 100000000;
        bin_search();


        printf("Case %d: %d\n", cases, min_mx);
        for(int i=0; i<final_camp; i++){
            printf("%d\n", ans[i]);
        }
    }
    return 0;
}
