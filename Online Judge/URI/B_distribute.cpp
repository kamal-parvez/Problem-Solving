#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;



int main() {

    int n, k;

    int ara[1001];

    scanf("%d %d", &n, &k);

    int sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &ara[i]);
        sum += ara[i];
    }

    int x = k/n;
    int y = k % n;
    int res;
    for(int i=0; i<n; i++){
        res = 0;
        int k = i;
        for(int j=1; j<=y; j++){
            res += ara[k];
            k--;
            if(k<0){
                k = n - 1;
            }
        }

        res += (sum * x);

        printf("%d", res);
        if(i<n-1)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}

