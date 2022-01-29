#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long long int fact(long long int x){
    long long int res = 1;
    for(long long int i=1; i<=x; i++){
        res *= i;
    }
    return res;
}


int main(){
    long long int n;
    cin>>n;

    printf("fa: %lld\n", fact(n));

    double cnt = 0, tp, x;
    int temp = 0;

    double dp[100000];
    memset(dp, -1, sizeof(dp));

    for(int i=1; i<=n; i++){
        if(i<100000 && dp[i] < 0){
            cnt += dp[i];
            continue;
        }
        temp = i;
        tp = 0;

        while(temp>10){
            x = temp/10;
            temp /= 10;
            tp++;
            x -= temp;
            tp += log10(x);

            if(i<100000 && dp[temp] < 0){
                tp += dp[temp];
                break;
            }
        }

        tp += log10(temp);
        if(i<100000)
            dp[i] = tp;
        //cout<<tp<<endl;
        cnt += tp;

    }


    long long ans = (long long int) floor(cnt) + 1;

    cout<<ans<<endl;

    return 0;
}
