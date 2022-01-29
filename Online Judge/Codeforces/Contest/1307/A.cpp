#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;


    while(t){

       int n, d;
       int ara[102];
       cin>>n>>d;
       for(int i=1; i<=n; i++){
            cin>>ara[i];
       }

        int pile = ara[1];
        int x;

        for(int i=2; i<=n; i++){
            for(int j=0; j<ara[i]; j++){
                if((i-1) <= d){
                    pile += 1;
                    d -= (i-1);
                }
            }

        }
        cout<<pile<<endl;


        t--;
    }
    return 0;
}

