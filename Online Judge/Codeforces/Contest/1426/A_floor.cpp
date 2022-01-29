#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int n, x;
    cin>>t;

    while(t--){
        cin>>n>>x;

        if(n<=2){
            cout<<1<<endl;
        }
        else{
            int k = n - 2;
            k = ceil(k*1.0/x) + 1;

            cout<<k<<endl;
        }


    }
    return 0;
}
