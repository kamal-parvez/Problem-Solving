#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int n, m;
    int a, b, c, d;
    cin>>t;

    while(t--){
        cin>>n>>m;
        int flag = 0;

        for(int i=0; i<n; i++){
            cin>>a>>b;
            cin>>c>>d;

            if(b==c){
                flag = 1;
            }
        }

        if(m%2 == 0 && flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

