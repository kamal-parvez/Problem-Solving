#include<bits/stdc++.h>
using namespace std;

long long int lcm(long long int a, long long int b){

    long long int mul = a*b;
    long long int c;

    while(b){
        c = a%b;
        a = b;
        b = c;
    }

    return mul/a;
}


int main(){
    long long int x;
    cin>>x;

    long long int limit = sqrt(x);
    //cout<<limit<<endl;

    long long int a = x;
    long long int b = 1;

    for(long long int i=2; i<=limit; i++){
        if(x%i == 0 && lcm(i, x/i) == x){
            a = min(a, x/i);
            b = max(b, i);
        }
    }

    cout<<b<<" "<<a<<endl;

    return 0;
}
