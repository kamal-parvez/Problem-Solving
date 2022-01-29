#include<bits/stdc++.h>
using namespace std;


int main(){
    char str[1000];
    scanf("%s", str);

    bool dp[1000][1000];
    memset(dp, false, sizeof(dp));

    int l = strlen(str);

    int max_len = 1;

    for(int i=0; i<l; i++){
        dp[i][i] = true;
    }

    //int start = 0;

    for(int i=0; i<l-1; i++){
        if(str[i] == str[i+1]){
            dp[i][i+1] = true;
            //  start = i;
            max_len = 2;
        }
    }


    for(int i=3; i<=l; i++){
        for(int j=0; j<l-i+1; j++){
            int k=j+i-1;

            if(dp[j+1][k-1] == true && str[j] == str[k]){
                dp[j][k] = true;

                if(k>max_len){
                    max_len = k;
                    //start = j;
                }
            }
        }
    }

    cout<<max_len<<endl;

    return 0;
}
