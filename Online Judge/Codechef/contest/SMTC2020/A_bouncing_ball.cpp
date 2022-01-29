#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    long long int d;

    while(t--){
        cin>>d;

        int cnt = 0;
        long long int a,b;

        while(d){
            a = d % 2;
            if(a == 1){
                cnt ++;
            }

            d = d/2;
        }

        cout<<cnt - 1<<endl;

    }
    return 0;
}
