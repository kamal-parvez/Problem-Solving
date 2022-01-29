#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, d;
    int cnt;

    for(int i=1; i<=t; i++){
        cin>>n>>d;

        int num = d;
        cnt = 1;
        int a, b;

        while(1){
            a = num%n;

            if(a == 0){
                break;
            }
            else{
                num = a*10 + d;
                cnt++;
            }
        }

        printf("Case %d: %d\n", i,cnt);

    }
    return 0;
}
