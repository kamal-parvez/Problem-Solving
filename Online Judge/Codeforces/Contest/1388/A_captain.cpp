#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;

    while(t--){
        cin>>n;

        if(n>30){
            printf("YES\n");
            if(n==36){
                printf("6 10 15 5\n");
            }
            else if(n==40){
                printf("6 10 15 9\n");
            }
             else if(n==44){
                printf("6 10 15 13\n");
            }
            else{
                printf("6 10 14 %d\n", n-30);
            }

        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
