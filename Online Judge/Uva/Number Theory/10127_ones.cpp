#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int n;

int mod_mul(int b, int p){
    if(p==0)
        return 1;
    if(p%2 == 0){
        long int x = mod_mul(b, p/2);
        return (x*x) % n;
    }
    else{
        long int y = mod_mul(b, p-1);
        return ((b%n) * y) % n;
    }
}


int main(){
    while(cin>>n){
        int inc = 1;
        long int sum = 1;

        while(sum){
            int res = mod_mul(10, inc);
            sum = ((sum%n) + (res%n)) % n;
            inc++;
        }

        cout<<inc<<endl;
    }

    return 0;
}
