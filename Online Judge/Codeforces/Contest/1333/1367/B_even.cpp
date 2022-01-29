#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int ara[50];
    int n;

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int odd = 0;
        int even = 0;

        for(int i=0; i<n; i++){
            if(i%2==0 && ara[i]%2!=0){
                even ++;
            }
            if(i%2==1 && ara[i]%2!=1){
                odd ++;
            }

        }

        if(odd == even){
            cout<<odd<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}

