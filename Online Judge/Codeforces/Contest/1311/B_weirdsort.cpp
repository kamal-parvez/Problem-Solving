#include<bits/stdc++.h>
using namespace std;

int pos[103];
int m;

bool check_pos(int j){
    for(int k=1; k<=m; k++){
        if(j == pos[k]){
            return true;
        }
    }
    return false;
}


int main(){
    int t;
    cin>>t;

    int ara[103];


    while(t){

        int n;
        cin>>n>>m;

        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }
        for(int i=1; i<=m; i++){
            cin>>pos[i];
        }

        int flag = 0;

        for(int i=n-1; i>=1; i--){
            for(int j=1; j<=i; j++){
                if(ara[j]>ara[j+1]){
                    if(check_pos(j)){
                        swap(ara[j], ara[j+1]);
                    }
                    else{
                        flag = 1;
                    }
                }
            }
        }

        if(flag == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        t--;
    }
    return 0;
}

