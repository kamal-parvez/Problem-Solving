#include<bits/stdc++.h>
using namespace std;

int ara[100000];
int n;


int bin_search2(int x){
    int lo = 0, mid, hi = n-1;
    int lowest = 0;

    if(ara[n-1]<x)
        return n;

    while(lo<=hi){
        mid = (lo + hi) / 2;
        //printf("x : %d  lo : %d   hi : %d   mid: %d\n", x, lo, hi, mid);

        if(ara[mid] == x){
            lowest = mid + 1;
            break;
        }
        else if(ara[mid] > x && mid == 0){
            lowest = mid;
            break;
        }
        else if(ara[mid] > x && ara[mid-1] < x){
            lowest = mid;
            break;
        }
        else if(ara[mid] > x){
            hi = mid - 1;
        }
        else if(ara[mid] < x){
            lo = mid + 1;
        }
    }
    return lowest;
}

int bin_search1(int x){
    int lo = 0, mid, hi = n-1;
    int lowest = 0;

    if(ara[n-1]<x)
        return n;

    while(lo<=hi){
        mid = (lo + hi) / 2;
        //printf("x : %d  lo : %d   hi : %d   mid: %d\n", x, lo, hi, mid);

        if(ara[mid] == x){
            lowest = mid;
            break;
        }
        else if(ara[mid] > x && mid == 0){
            lowest = mid;
            break;
        }
        else if(ara[mid] > x && ara[mid-1] < x){
            lowest = mid;
            break;
        }
        else if(ara[mid] > x){
            hi = mid - 1;
        }
        else if(ara[mid] < x){
            lo = mid + 1;
        }
    }
    return lowest;
}


int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        int q;
        scanf("%d %d", &n, &q);
        for(int j=0; j<n;j++){
            scanf("%d", &ara[j]);
        }

        int ak, bk;
        int l1, l2;
        printf("Case %d:\n", i);

        while(q){
            scanf("%d %d", &ak, &bk);
            l1 = bin_search1(ak);
            l2 = bin_search2(bk);
            //printf("%d  %d  %d\n", l1, l2, l2-l1);
            printf("%d\n", l2-l1);
            q--;
        }
    }
    return 0;
}

