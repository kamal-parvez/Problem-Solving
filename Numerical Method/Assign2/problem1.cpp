#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

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

void false_position(double xl, double xh, double tol){

    double  xm, err, prev, pre;

    FILE *fp1 = fopen("pr1_gr3.csv","w");
    FILE *fp2 = fopen("pr1_gr4.csv","w");

    printf("Itr --- Upper value --- Lower value--- XM      --- f(XM)     --- Error\n");

    for(int i = 0;; i++){

        double fxl = fun(xl);
        double fxh = fun(xh);

        xm = xh - ((fxh * (xh - xl)) / (fxh - fxl));

        double fxm = fun(xm);

        pre = xm;
        double x = (pre - prev) / (pre * 1.0);
        err = absol(x) * 100.0;


        printf("%d  --- %lf --- %lf --- %lf --- %lf --- ", i+1, xh, xl, xm, fxm);

        if(i == 0)
            printf("***\n");

        else{
            printf("%f\n", err);
            fprintf(fp2,"%d %lf\n",i+1, err);
            fprintf(fp1,"%lf %lf\n",xm, err);
        }


        if(fxm<0){
            xl = xm;
        }
        else{
            xh = xm;
        }
        prev = pre;

        if(err<tol)
            break;

    }

    printf("The root is : %.6lf\n", xm);

}


void bisection(double lo, double hi, double tol){
    double mid, err, prev, pres;

    FILE *fp1 = fopen("pr1_gr1.csv","w");
    FILE *fp2 = fopen("pr1_gr2.csv","w");

    printf("Itr --- Upper value--- Lower value--- XM       --- f(XM)     --- Error(%)\n");

    for(int i = 0;; i++){
        mid = (lo + hi)/2.0;

        double fxm = fun(mid);

        pres = mid;
        double x = (pres - prev) / (pres * 1.0);
        err = absol(x) * 100.0;


        printf("%d  --- %lf --- %lf --- %lf --- %lf --- ", i+1, hi, lo, mid, fxm);

        if(i == 0)
            printf("---\n");
        else{
            printf("%f\n", err);
            fprintf(fp2,"%d %lf\n",i+1, err);
            fprintf(fp1,"%lf %lf\n",mid, err);
        }


        if(fxm<0){
            lo = mid;
        }
        else{
            hi = mid;
        }
        prev = pres;

        if(err<tol)
            break;

    }
     printf("The root is : %.6lf\n", mid);
}



int main(){
    double lo, hi, tol;

    cout<<"Enter the lower value: ";
    cin>>lo;
    cout<<"Enter the upper value: ";
    cin>>hi;
    cout<<"Enter the tolerance: ";
    cin>>tol;


    //f(x) for x

    printf("XL      --- f(XM)\n");

    for(double i = lo; i<=hi; i += 0.1){
        double fm = fun(i);
        printf("%f %f\n",i,fm);
    }


    double x1 = fun(lo);
   // printf("low = %f\n", x1);
    double x2 = fun(hi);
   // printf("hi = %f\n",x2);

    if(x1*x2 < 0){
        bisection(lo, hi, tol);
        false_position(lo, hi, tol);
    }
    else{
        cout<<"Root is not possible"<<endl;
    }


    return 0;
}
