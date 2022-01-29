#include<bits/stdc++.h>
using namespace std;
#define MOD 100000007

unsigned long long int a, b;
unsigned long long int dp[100001];
int primePower[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int primeSize = 11;

unsigned long long int catalan(int n){
    if(n <= 1){
        return 1;
    }

    unsigned long long int cnt = 0;
    unsigned long long int cnt1 = 0;
    unsigned long long int cnt2 = 0;

    for(int i=0; i<n; i++){
        if(dp[i] != -1){
            cnt1 = dp[i];
        }
        else{
            cnt1 = catalan(i) % MOD;
            dp[i] = cnt1;
        }

        if(dp[n-i-1] != -1){
            cnt2 = dp[n-i-1];
        }
        else{
            cnt2 = catalan(n-i-1) % MOD;
        }

        cnt += ((cnt1 * cnt2) % MOD);
    }

    return cnt % MOD;
}

int countPerfectPower(){
    int lowestBase, highestBase;
    int cnt = 0;

    for(int i=0; i<primeSize; i++){

        lowestBase = (int) ceil(pow(a, 1.0/primePower[i]) * 1.0);
        highestBase = (int) floor(pow(b, 1.0/primePower[i]) * 1.0);

        //printf("For %d   lowest base : %d    highestBase : %d\n", primePower[i], lowestBase, highestBase);

        if(pow(lowestBase, primePower[i]) > b || pow(highestBase, primePower[i]) < a){
            lowestBase = -1;
            highestBase = -1;    // no base for this power
        }

        //printf("For %d   lowest base : %d    highestBase : %d\n", primePower[i], lowestBase, highestBase);

        if(highestBase >= lowestBase && lowestBase > 1 && highestBase > 1){
            cnt += (highestBase - lowestBase + 1);
        }
        else if(lowestBase <= 1 && highestBase >1){
            cnt +=  (highestBase - 1);
        }
        //printf("cnt : %d\n", cnt);
    }

    if(a<= 64 && b>= 64)
        cnt--;

    return cnt;
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int testCase;
    cin>>testCase;

    memset(dp, -1, sizeof(dp));

    for(int test=1; test<=testCase; test++){
        cin>>a>>b;

        int countPP = countPerfectPower();
        //printf("PP : %d\n", countPP);

        unsigned long long int countBST;

        if(countPP == 0){
            countBST = 0;
        }
        else{
            countBST = catalan(countPP);
        }
        printf("Case %d: %lld\n", test, countBST);
    }

    return 0;
}
