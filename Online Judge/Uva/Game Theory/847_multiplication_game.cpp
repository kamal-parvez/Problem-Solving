#include<bits/stdc++.h>
using namespace std;

#define sz 100000


long long int n;

int dp[sz];


int game(long long int p){
    if(p>=n)
        return 0;

    long long int x1, x2, x3, x4, x5, x6, x7, x8;

    if(p<sz && dp[p] != -1){
        return dp[p];
    }

    x1 = p*2;
    x2 = p*3;
    x3 = p*4;
    x4 = p*5;
    x5 = p*6;
    x6 = p*7;
    x7 = p*8;
    x8 = p*9;
    if(game(x1)==0 || game(x2)==0  || game(x3)==0  || game(x4)==0  || game(x5)==0  || game(x6)==0
        || game(x7)==0  || game(x8)==0 ){

        if(p<sz){
            dp[p]=1;
        }

        return 1;
    }

     if(p<sz){
        dp[p]=0;
    }

    return 0;


    /*if(x2<sz && dp[x2] != -1){
        a2 = dp[x2];
        if(a2 == 0)
            return 1;
    }
    else if(game(x2)==0){
        dp[x2]=0;
        return 1;
    }




    if(x3<sz && dp[x3] != -1){
        a3 = dp[x3];
        if(a3 == 0)
            return 1;
    }
    else if(game(x3)==0){
        dp[x3]=0;
        return 1;
    }


    if(x4<sz && dp[x4] != -1){
        a4 = dp[x4];
        if(a4 == 0)
            return 1;
    }
    else if(game(x4)==0){
        dp[x4]=0;
        return 1;
    }



    if(x5<sz && dp[x5] != -1){
        a5 = dp[x5];
        if(a5 == 0)
            return 1;
    }
    else if(game(x5)==0){
        dp[x5]=0;
        return 1;
    }



    if(x6<sz && dp[x6] != -1){
        a6 = dp[x6];
        if(a6 == 0)
            return 1;
    }
    else if(game(x6)==0){
        dp[x6]=0;
        return 1;
    }



    if(x7<sz && dp[x7] != -1){
        a7 = dp[x7];
        if(a7 == 0)
            return 1;
    }
    else if(game(x7)==0){
        dp[x7]=0;
        return 1;
    }


    if(x8<sz && dp[x8] != -1){
        a8 = dp[x8];
        if(a8 == 0)
            return 1;
    }
    else if(game(x8)==0){
        dp[x8]=0;
        return 1;
    }*/



}

int main(){



    while(scanf("%lld", &n) == 1){
        memset(dp, -1, sizeof(dp));
        if(game(1) == 1){
            printf("Stan wins.\n");
        }
        else{
            printf("Ollie wins.\n");
        }
        //for(int i=0; i<n; i++){
          //  cout<<i<<" : "<<dp[i]<<endl;
        //}
    }
    return 0;
}
