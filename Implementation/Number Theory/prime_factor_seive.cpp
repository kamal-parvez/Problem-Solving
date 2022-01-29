#include<bits/stdc++.h>
using namespace std;

#define sz 1000

int status[sz];

void prime(int n){
    int sq = sqrt(n);

    for(int i=4; i<=n; i+=2)
        status[i] = 1;

    for(int i=3; i<=sq; i+=2){
        if(status[i]==0){
            for(int j=i*i; j<=n; j+=i)
                status[j] = 1;
        }
    }
}

void factor(int n){
    for(int i=2; i<=n; i++){
        if(status[i] == 0){
            while(n%i == 0){
                cout<<i<<endl;
                n /= i;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;

    prime(n);
    factor(n);

    return 0;
}
