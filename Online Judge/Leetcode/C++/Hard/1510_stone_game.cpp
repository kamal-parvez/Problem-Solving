#include<bits/stdc++.h>
using namespace std;


int dp[100001];

int can_win(int n){
    if(n == 0)
        return dp[0] = 0;
    if(n == 1){
        return dp[1] = 1;
    }

    int temp = sqrt(n);
    //cout<<n<<"   "<<temp<<endl;
    int res = 1;

    for(int i=1; i<=temp; i++){
        if(dp[n-i*i] == -1){
            dp[n-i*i] = can_win(n-i*i) ;
            res = res * dp[n-i*i];
            //printf("i: %d --- %d --- %d  ----   res : %d\n", i, n-i*i, dp[n-i*i], res);
            //printf("i: %d  n: %d --- n-i*i: %d --- dp: %d  ----   res : %d\n", i, n, n-i*i, dp[n-i*i], res);
        }
        else{
            res = res * dp[n-i*i];
        }

    }


    if(res == 0){
        return 1;
    }
    else{
        return 0;
    }
}


bool winnerSquareGame(int n) {
    memset(dp, -1, sizeof(dp));

    if(can_win(n) == 1){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    int n;
    cin>>n;
    cout<<winnerSquareGame(n)<<endl;
}
