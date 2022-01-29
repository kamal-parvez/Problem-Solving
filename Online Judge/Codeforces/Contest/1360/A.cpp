#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int a, b;

    while(t--){
        cin>>a>>b;

        int c = 2 * min(a, b);

        if(c >= max(a, b)){
            c = c*c;
        }
        else{
            c = max(a, b)*max(a, b);
        }

        cout<<c<<endl;

    }
    return 0;
}
