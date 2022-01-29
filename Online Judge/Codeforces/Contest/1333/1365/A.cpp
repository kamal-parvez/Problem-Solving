#include<bits/stdc++.h>
using namespace std;

int ara[51][51];
int m, n;


bool fun(int row, int col){
    //ROW
    for(int i=0; i<m; i++){
        if(ara[row][i] == 1){
            return false;
        }
    }
    //Column
    for(int i=0; i<n; i++){
        if(ara[i][col] == 1){
            return false;
        }
    }

    ara[row][col] = 1;

    return true;
}


int main(){
    int t;
    cin>>t;


    while(t--){
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ara[i][j];
            }
        }
        int cnt = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(ara[i][j]==0 && fun(i, j)){
                    cnt++;
                }
            }
        }
        //cout<<cnt<<endl;

        if(cnt%2==0){
            printf("Vivek\n");
        }
        else{
            printf("Ashish\n");
        }
    }
    return 0;
}
