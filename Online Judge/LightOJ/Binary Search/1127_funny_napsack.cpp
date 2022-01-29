#include<bits/stdc++.h>
using namespace std;



int possible(int ara[], int n, int w, int way){
    for(int i=0; i)
}


int bin_search(int ara[], int n, int w){
    int lo = 1;
    int hi = 1073741824;
    int mid;
    sort(ara, ara+n);

    while(lo<hi){
        mid = (lo+hi)/2;

        if(possible(mid, ara, n)){

        }
    }
}


int main(){
    int t;
    cin>>t;

    int n, w;
    int ara[40];

    for(int cases=1; cases<=t; cases++){
        cin>>n>>w;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

    }
}
