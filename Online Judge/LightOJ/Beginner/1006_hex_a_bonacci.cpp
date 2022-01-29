#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
long long int dp[10003];


int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n-1] = fn(n-1) % 10000007;
    dp[n-2] = fn(n-2) % 10000007;
    dp[n-3] = fn(n-3) % 10000007;
    dp[n-4] = fn(n-4) % 10000007;
    dp[n-5] = fn(n-5) % 10000007;
    dp[n-6] = fn(n-6) % 10000007;

    return (dp[n-1] + dp[n-2] + dp[n-3] + dp[n-4] + dp[n-5] + dp[n-6]) % 10000007;
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp,-1,sizeof(dp));
        printf("Case %lld: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
