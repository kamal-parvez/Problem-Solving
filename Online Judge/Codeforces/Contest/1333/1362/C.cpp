#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    long long int n;
    //int ara[20000];

    while(t--){
        cin>>n;

        long long int c, a, res=0;
        a = n;
        //c = 1;
        while(a){
            res += a;
            a = a/2;
        }

        cout<<res<<endl;
    }
    return 0;
}


