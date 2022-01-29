#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;


    int n;

    while(t--){
        cin>>n;

        if(n==1){
            printf("FastestFinger\n");
        }
        else if(n==2 || n%2==1){
            printf("Ashishgup\n");
        }

        else{
            int sq = sqrt(n);
            int flag = 0;

            for(int i=3; i<=sq;){
                if(n%i==0){
                    flag = 1;
                }
                i += 2;
            }
            if(flag == 1){
                printf("Ashishgup\n");
            }
            else{
                printf("FastestFinger\n");
            }
        }

    }
    return 0;
}

