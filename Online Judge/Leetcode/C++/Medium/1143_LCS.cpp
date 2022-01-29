#include<bits/stdc++.h>
using namespace std;


string text1;
string text2;
int dp[1000][1000];


int lcs(int i, int j){
    if(i <0 || j <0){
        return 0;
    }

    if(text1[i] == text2[j] &&  dp[i][j] == -1){
        dp[i][j] = 1 + lcs(i-1, j-1);
    }
    else if(text1[i] != text2[j] &&  dp[i][j] == -1){
        dp[i][j] = max(lcs(i-1, j), lcs(i, j-1));
    }

    return dp[i][j];
}


int longestCommonSubsequence(string t1, string t2) {
    text1 = t1;
    text2 = t2;

    memset(dp, -1, sizeof(dp));
    int length1 = text1.length();
    int length2 = text2.length();

    return lcs(length1-1, length2-1);
}


int main(){
    cout<<longestCommonSubsequence("abcde", "ace")<<endl;
    return 0;
}
