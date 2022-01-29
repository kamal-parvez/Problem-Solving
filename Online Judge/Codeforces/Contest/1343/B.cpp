#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int ara[200001];

    while(t--){
        int n;
        cin>>n;

        int x = n/2;

        if(x%2 == 0){
            printf("YES\n");

            int a = 2, b = 4;

            for(int i=0; i<x;){
                ara[i] = a;
                ara[i+1] = a + 2;

                ara[n-i-1] = a - 1;
                ara[n-i-2] = a + 2 + 1;

                a += 6;
                i +=2;
            }

            for(int i=0; i<n; i++){
                printf("%d", ara[i]);
                if(i<n-1)
                    printf(" ");
                else
                    printf("\n");
            }
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
