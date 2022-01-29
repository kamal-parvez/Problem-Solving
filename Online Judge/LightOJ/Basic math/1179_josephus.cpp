#include<bits/stdc++.h>
using namespace std;


int joseph(int n, int k){
    if(n == 1)
        return 0;

    return (joseph(n-1, k) + k) % n;
}


int main(){
    int t;
    cin>>t;

    int n, k;
    int cnt;

    for(int i=1; i<=t; i++){
        cin>>n>>k;

        printf("Case %d: %d\n", i, joseph(n, k) + 1);

    }
    return 0;
}


