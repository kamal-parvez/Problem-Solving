#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//incomplete

double fun(double x){
    return ((x-1)*(x-1)*(x-1)) + 0.512;
}

double dx_fun(double x){
    return 3*(x-1)*(x-1);
}

double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

int main(){
    double x, xi, err, prev, pre;
    x = 5.0;

    printf("Itr --- XL      --- XH       --- f(XL)     --- f(XH)     --- XM       --- f(XM)     --- Error\n");

    for(int i = 0; i<5; i++){

        double fx = fun(x);
        double fdx = dx_fun(x);

        xi = x - fx/fdx;


        pre = xi;
        err = absol((pre - prev) / (pre * 1.0)) * 100.0;


        printf("%d  --- %lf --- %lf --- %lf --- ", i+1, x, fx, fdx);

        if(i == 0)
            printf("***\n");
        else
            printf("%f\n", err);

        x = xi;
        prev = pre;

    }

    printf("The root is : %.6lf\n", xi);

    return 0;
}
