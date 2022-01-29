#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;

    char ara[60][60];

    while(t--){
        cin>>n;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin>>ara[i][j];
            }
        }

        /*cout<<"dkfj"<<endl;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout<<ara[i][j];
            }
            cout<<endl;
        }*/

        int flag = 0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                //cout<<ara[i][j]<<endl;

                if(ara[i][j] == '1'){
                    if(j==n || i==n){
                        continue;
                    }

                    if(ara[i][j+1] != '1'  && ara[i+1][j] != '1'){
                        //cout<<"row"<<endl;
                        flag = 1;
                        break;
                    }
                }
            }

            if(flag == 1){
                break;
            }
        }

        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}




