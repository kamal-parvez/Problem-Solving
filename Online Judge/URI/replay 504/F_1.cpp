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

    //printf("fa: %lld\n", fact(n));

    double cnt = 0, tp, x;
    double temp = 0;

    for(int i=1; i<=n; i++){

        temp = i;
        while(temp>10){
            temp /= 10;
            cnt++;
        }

        cnt += log10(temp);

    }


    long long ans = (long long int) floor(cnt) + 1;

    cout<<ans<<endl;

    return 0;
}

