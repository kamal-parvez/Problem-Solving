#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
    int testcase;
    int m, n, q;
    int u, v, w = 1;

    scanf("%d", &testcase);

    for(int i=1; i<=testcase; i++){
        scanf("%d %d %d", &m, &n, &q);

        long long int weightedSumX = 0;
        long long int weightedSumY = 0;
        long long int sumW = 0;

        for(int j=0; j<q; j++){
            scanf("%d %d", &u, &v);
            weightedSumX += (u * w);
            weightedSumY += (v * w);
            sumW += w;
        }

        double tempX = (weightedSumX * 1.0) / sumW;
        double tempY = (weightedSumY * 1.0) / sumW;

        int resX, resY;

        if(tempX - (int)tempX >= 0.5){
            resX = (int)tempX + 1;
        }
        else{
            resX = (int)tempX;
        }

         if(tempY - (int)tempY >= 0.5){
            resY = (int)tempY + 1;
        }
        else{
            resY = (int)tempY;
        }


        printf("Case %d: %d %d\n", i, resX, resY);
    }
    return 0;
}












