#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int l, r;
    int x, y;

    while(t--){
        cin>>l>>r;
        if(l*2<=r){
            printf("%d %d\n", l, l*2);
        }
        else{
            printf("-1 -1\n");
        }
    }
    return 0;
}
