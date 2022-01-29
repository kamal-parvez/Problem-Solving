#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double fun(double x){
    return (x*x*x - 0.165 * x* x + 3.993 /10000);
}

double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

int main(){
    double lo, hi, mid, err, prev, pres;
    lo = 0.11;
    hi = 0;


    FILE *fp1 = fopen("bi_out1.txt","w");



    printf("Itr --- XL      --- XH       --- XM       --- f(XM)     --- Error\n");

    for(int i = 0; i<10; i++){
        mid = (lo + hi)/2.0;

        double fxm = fun(mid);

        pres = mid;
        double x = (pres - prev) / (pres * 1.0);
        err = absol(x) * 100.0;


        printf("%d  --- %lf --- %lf --- %lf --- %lf --- ", i+1, lo, hi, mid, fxm);

        if(i == 0)
            printf("---\n");
        else{
            printf("%f\n", err);
            fprintf(fp1,"%d %lf\n",i+1, err);
        }




        if(fxm<0){
            lo = mid;
        }
        else{
            hi = mid;
        }
        prev = pres;

    }

    printf("The root is : %.6lf\n", mid);

    return 0;
}
