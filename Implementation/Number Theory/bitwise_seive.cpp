#include<bits/stdc++.h>
using namespace std;

#define sz 103/32

int status[sz];

int check(int n, int pos){
    return n & (1<<pos);
}

int set_bit(int n, int pos){
    return n | (1<<pos);
}



void prime(int n){
    int sq = sqrt(n);

    for(int i = 3; i <= n ;i+=2){
        if(check(status[i>>5], i & 31) == 0){     //kono number k 32 diye mod kora r 31 diye and kora ek e kotha
            for(int j = i*i; j<=n; j+=i){       // i%32 = i & 31. and operation onk fast.
                status[j>>5] = set_bit(status[j>>5], j & 31);  //kono number k 2 diye vag kora mane 2 ghor r8 shift kora
            }                                                  //32 diye vag kora mane 5 ghor r8 shift kora. so i/32 = i>>5.
        }
    }

    cout<<"2"<<endl;

    for(int i = 3; i<=n; i+=2){
        if(check(status[i>>5], i & 31) == 0){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}
