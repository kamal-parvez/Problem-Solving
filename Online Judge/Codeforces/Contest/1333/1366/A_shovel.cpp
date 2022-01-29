#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a, b;

    int res;

    while(t--){
        cin>>a>>b;
        int temp, x, y;

        if(2*a<=b){
            res = a;
        }
        else if(2*b<=a){
            res = b;
        }
        else{
            res = (int) floor((2*a-b)/3.0);
            x = (a - res*2);
            y = b - res;
            y = y/2;
            x = min(x, y);
            res += x;
        }
        cout<<res<<endl;

    }
    return 0;
}
