#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    long long int x, y, a, b;
    long long int res;

    while(t--){
        cin>>x>>y>>a>>b;

        res = 0;

        if(x<y){
            if(2*a < b){
                res += (2*a*x);
            }
            else{
                res += (b*x);
            }

            res += ((y-x)*a);
        }
        else{
            if(2*a < b){
                res += (2*a*y);
            }
            else{
                res += (b*y);
            }
            res += ((x-y)*a);
        }

        cout<<res<<endl;
    }
    return 0;
}
