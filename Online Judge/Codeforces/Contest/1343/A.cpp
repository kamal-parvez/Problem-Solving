#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;

        long long int num = 1;
        long long int temp = 1;
        int c;
        long long int a, b;

        while(1){
            num += (temp*2);
            a = n % num;

            if(a == 0){
                a = n/num;
                break;
            }
            temp *=2;
        }
        cout<<a<<endl;
    }
    return 0;
}
