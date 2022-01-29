#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int n;
    int ara[1002];

    while(t--){
        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }

        int one = 0;
        int zero = 0;

        for(int i=1; i<=n; i++){
            if(ara[i]==1){
                one++;
            }
            else{
                zero++;
            }
        }

        int k = n/2;


        if(k%2==0){

            if(one>n/2){
                cout<<n/2<<endl;

                for(int i=1; i<=n/2; i++){
                    cout<<1;
                    if(i != n/2){
                        printf(" ");
                    }
                }
                cout<<endl;
            }
            else {
                cout<<n/2<<endl;

                for(int i=1; i<=n/2; i++){
                    cout<<0;
                    if(i != n/2){
                        printf(" ");
                    }
                }
                cout<<endl;
            }
        }
        else{
            if(one-1>=n/2){
                k = n/2 + 1;
                cout<<k<<endl;

                for(int i=1; i<=k; i++){
                    cout<<1;
                    if(i != k){
                        printf(" ");
                    }
                }
                cout<<endl;
            }
            else {
                cout<<n/2<<endl;

                for(int i=1; i<=n/2; i++){
                    cout<<0;
                    if(i != n/2){
                        printf(" ");
                    }
                }
                cout<<endl;
            }
        }

    }
    return 0;
}
