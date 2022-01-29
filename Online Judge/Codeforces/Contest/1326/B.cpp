#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    long int ara[200000];
    for(int i=0; i<n; i++){
        scanf("%ld", &ara[i]);
    }
    long int mx = 0;

    long res[200000];

    for(int i=0; i<n; i++){
        res[i] = ara[i] + mx;
        mx = max(mx, res[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d", res[i]);
        if(i<n-1)
            printf(" ");
    }
    printf("\n");


    return 0;
}

