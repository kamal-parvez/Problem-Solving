#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

#define sz 1000

int status[sz];


void prime(int n){

    int sq = sqrt(n);

    //cut the numbers multiple of 2
    for(int i=4; i<=n; i+=2){
        status[i] = 1;
    }

    for(int i=3; i<=sq; i+=2){
        if(status[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                status[j] = 1;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;

    prime(n);

    cout<<"The prime numbers between 2 and "<<n<<" are :---------"<<endl;
    for(int i=2; i<=n; i++){
        if(status[i]==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
