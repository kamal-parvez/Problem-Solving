#include<bits/stdc++.h>
using namespace std;

long long int fun(long long int n){
    long long int x;
    x = (n*(n+1))/2;
    return x;
}


int main(){
    int t;
    cin>>t;
    long long int n;
    long long int k;
    char ara[100000];
    while(t){

        cin>>n>>k;

        long long int lo=0, hi = 100000, mid;

        long long int x =0 ;

        while(lo<=hi){
            mid = (lo + hi)/2;
            //printf("lo : %d   mid: %d   hi : %d\n", lo, mid, hi);
            if(fun(mid) == k){
                break;
            }
            else if(fun(mid)<k && fun(mid+1)>k){
                break;
            }
            else if(fun(mid)<k){
                lo = mid+1;
            }
            else{
                hi = mid -1;
            }
        }
        x = (int) (k - fun(mid));

        //printf("lo : %d   mid: %d   hi : %d\n", lo, mid, hi);
        //cout<<"x :"<<x<<endl;

        for(int i=0; i<n; i++){
            ara[i] = 'a';
        }

        if(x == 0){
            ara[n-1-mid] = 'b';
            ara[n-1-mid+1] = 'b';
        }
        if(x != 0){
            ara[n-1-mid-1] = 'b';
            ara[n-1-x+1] = 'b';
        }


        for(int i=0; i<n; i++){
            printf("%c", ara[i]);
        }
        printf("\n");
        t--;
    }
    return 0;
}


/*
for(int i=0; i<n-2; i++){
            ara[i] = 'a';
        }
        ara[n-2] = 'b';
        ara[n-1] = 'b';

        int cnt = 1;

        for(int i=n-2; i>0; i--){
            if(cnt == k)
                break;
            swap(ara[i], ara[i-1]);
            swap(ara[i+1], ara[n-1]);
            cnt++;

            //printf("1 : %s\n", ara);

            if(cnt == k)
                break;

            for(int j=n-1; j>i; j--){
                swap(ara[j], ara[j-1]);
                cnt++;
                //printf("2: %s\n", ara);

                if(cnt == k)
                    break;
            }
        }


        //printf("ANs : %s\n", ara);
        for(int i=0; i<n; i++){
            printf("%c", ara[i]);
        }
        printf("\n");
*/
