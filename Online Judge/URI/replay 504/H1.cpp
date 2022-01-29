#include<bits/stdc++.h>
using namespace std;

char ara[1000];
int dp[1000][1000];
string str;


int pali(int i, int j){
    if(i==j)
        return 1;

    if(str[i] == str[j] && i+1==j)
        return 2;

    if(dp[i][j] != -1)
        return dp[i][j];


    if(str[i] == str[j])
        return dp[i][j] = pali(i+1, j-1) + 2;

    else{
        return dp[i][j] = max(pali(i, j-1), pali(i+1, j));
    }
}




int main(){

    scanf("%s", ara);

    int l = strlen(ara);

    str = "";

    for(int i=0; i<l; i++){
        if(ara[i] != 'a'){
            str += ara[i];
        }
    }
    //cout<<ara<<endl;

    memset(dp, -1, sizeof(dp));


    l = str.size();


    cout<<pali(0, l-1)<<endl;

    return 0;
}

