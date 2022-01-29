#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int apple[60];
    int orange[60];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>apple[i];
        }

        for(int i=0; i<n; i++){
            cin>>orange[i];
        }

        int sa = apple[0];
        int so = orange[0];

        for(int i=1; i<n; i++){
            if(sa>apple[i]){
                sa = apple[i];
            }
            if(so>orange[i]){
                so = orange[i];
            }
        }
        long long int cnt = 0;
        int x, y;

        for(int i=0; i<n; i++){
            x = apple[i] - sa;
            y = orange[i] - so;

            cnt += max(x, y);
        }

        cout<<cnt<<endl;

    }
    return 0;
}

