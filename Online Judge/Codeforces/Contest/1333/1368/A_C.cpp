#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    long long int a, b, n, temp, cnt;

    while(t--){
        cin>>a>>b>>n;

        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

        cnt = 0;
        temp = b;

        while(temp <= n){
            temp = a + b;
            a = b;
            b = temp;
            cnt++;
        }

        cout<<cnt<<endl;

    }
    return 0;
}
