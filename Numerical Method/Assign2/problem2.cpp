#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//incomplete

double fun(double x, int i){
    if(i == 1)
        return (-1) * (x*x) + 1.8 * x + 2.5;
    else
        return exp(-.5*x) * (4-x) - 2;
}

double dx_fun(double x, int i){
    if(i == 1)
        return (-1)*2*x + 1.8;
    else
        return -0.5 * exp(-.5*x) * (4-x) - exp(-.5*x);
}



double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

double newton(double x, double tol, int z){
    double  xi, err, prev, pre;

    printf("Itr --- Xi    --- f(Xi)     --- f'(Xi)      --- Error\n");

    for(int i = 0; ; i++){

        double fx = fun(x, z);
        double fdx = dx_fun(x, z);

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

        if(tol > err)
            break;

    }

    return xi;
}

int main(){
    double x, tol;
    cout<<"Enter the tolerance :";
    cin>>tol;

    x = newton(5, tol, 1);
    printf("The root is : %.6lf\n", x);
    x = newton(6, tol, 2);
    printf("The root is : %.6lf\n", x);
   // x = newton(6, tol, 2);
   // printf("The root is : %.6lf\n", x);
   // x = newton(8, tol, 2);
    //printf("The root is : %.6lf\n", x);

    return 0;
}
