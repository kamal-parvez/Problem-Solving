#include<stdio.h>
#include<math.h>


double fun(double m){
    double g = 9.8;
    int c = 15;
    int v = 35;
    int t = 9;

    return (g * m)/c * (1 - exp(-1 * (c/m) * t)) - v;
}

double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

int main(){
    double xl, xh, xm, err, prev, pre;
    xl = -2.5;
    xh = -1.0;

    printf("Itr --- XL      --- XH       --- f(XL)     --- f(XH)     --- XM       --- f(XM)     --- Error\n");

    for(int i = 0; i<5; i++){

        double fxl = fun(xl);
        double fxh = fun(xh);

        xm = xh - ((fxh * (xh - xl)) / (fxh - fxl));

        double fxm = fun(xm);

        pre = xm;
        double x = (pre - prev) / (pre * 1.0);
        err = absol(x) * 100.0;


        printf("%d  --- %lf --- %lf --- %lf ---  %lf ---  %lf --- %lf --- ", i+1, xl, xh, fxl, fxh, xm, fxm);

        if(i == 0)
            printf("***\n");
        else
            printf("%f\n", err);


        if(fxm<0){
            xl = xm;
        }
        else{
            xh = xm;
        }
        prev = pre;

    }

    printf("The root is : %.6lf\n", xm);

    return 0;
}

