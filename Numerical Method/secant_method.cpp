#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//incomplete

double fun(double x){
    return 8*sin(x) * exp(-1*x) - 1;
}

double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

int main(){
    double x0, x1, xi, err, prev, pre, fxi;
    x0 = 0.5;
    x1 = 0.4;

    printf("Itr --- Xi-1      --- Xi       --- Xi+1       --- f(Xi+1)     --- Relative app. Error\n");

    double fx0 = fun(x0);
    double fx1 = fun(x1);

    for(int i = 0; i<5; i++){

        xi = x1 - (fx1 * (x1 - x0))/(fx1 - fx0) ;
        fxi = fun(xi);

        pre = xi;
        err = absol((pre - prev) / (pre * 1.0)) * 100.0;


        printf("%d  --- %lf --- %lf --- %lf --- %lf ---", i+1, x0, x1, xi, fxi);

        if(i == 0)
            printf("***\n");
        else
            printf("%f\n", err);

        x0 = x1;
        x1 = xi;
        fx0 = fx1;
        fx1 = fxi;
        prev = pre;

    }

    printf("The root is : %.6lf\n", xi);

    return 0;
}
