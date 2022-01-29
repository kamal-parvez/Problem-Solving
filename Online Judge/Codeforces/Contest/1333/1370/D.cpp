#include<bits/stdc++.h>
using namespace std;


int main(){
    int ara[200001];
    int n, k;

    cin>>n>>k;

    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    int t = ara[0];

    sort(ara, ara+n);
    for(int i=0; i<n; i++){
        printf("%d  ", ara[i]);
    }
    cout<<endl;
    int res;

    if(k%2==0){
        res = ara[k/2-1];
    }
    else if(k%2==1 && ara[0] != t){
        res = ara[k/2-1];
    }
    else{
        res = ara[k/2];
    }

    cout<<res<<endl;

    return 0;
}
