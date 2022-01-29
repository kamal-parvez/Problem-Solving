#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, m;

    while(t--){
        cin>>n>>m;

        int res;

        if(n%2==0){
            res = n/2 * m;
        }
        else if(m%2==0){
            res = m/2 * n;
        }
        else{
            res = (n-1)/2 * (m-1);
            res += (m/2) + (n/2) + 1;
        }

        cout<<res<<endl;
    }
    return 0;
}
