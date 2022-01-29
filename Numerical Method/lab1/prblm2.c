#include<stdio.h>
#include<math.h>
#include<stdlib.h>


double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

double fun(double x){

    int ca0 = 42;
    int cb0 = 28;
    int cc0 = 4;
    double k = 0.016;

   double res = (cc0 + x) / ((ca0 - 2*x) * (ca0 - 2*x) * (cb0 - x));
   res -= k;

   return res;
}


void first(){
    FILE *fp1 = fopen("pr2_a.csv","w");

    double x = 0;
    double fx;

    while(x<=20){
        fx = fun(x);
        fprintf(fp1,"%lf %lf\n",x, fx);
        x += 1;
    }
}


void bisection(double lo, double hi, double acc){



    double mid, err, prev, pres;

    FILE *fp = fopen("pr2_c_bi.csv","w");

    int i =0;

    while(1){

        mid = (lo + hi)/2.0;

        double fxm = fun(mid);

        pres = mid;

        if(absol(pres - prev) < acc){
            break;
        }

        double xxx = (pres - prev) / (pres * 1.0);
        err = absol(xxx) * 100.0;

        if(i>0){
            fprintf(fp,"%d %lf\n",i, err);
        }


        if(fxm<0){
            lo = mid;
        }
        else{
            hi = mid;
        }
        prev = pres;
        i++;

    }
}



void second(){

    double xl, xh, xm, err, prev, pre, acc, fxl, fxh;

    printf("Enter the lower bound and upper bound : ");
    scanf("%lf %lf", &xl, &xh);
    printf("Enter the accuracy level : ");
    scanf("%lf", &acc);

    fxl = fun(xl);
    fxh = fun(xh);

    double pos = fxl * fxh;

    if(pos < 0){

        bisection(xl, xh, acc);

        FILE *fp2 = fopen("pr2_b.csv","w");

        printf("Itr *** XL      *** XH        *** XM       *** f(XM)     *** Error\n");

        int i = 0;

        while(1){

            fxl = fun(xl);
            fxh = fun(xh);

            xm = xh - ((fxh * (xh - xl)) / (fxh - fxl));

            double fxm = fun(xm);

            pre = xm;
            double x = (pre - prev) / (pre * 1.0);
            err = absol(x) * 100.0;


            printf("%d  *** %lf *** %lf ***   %lf *** %lf *** ", i, xl, xh, xm, fxm);

            if(i == 0)
                printf("***\n");
            else{
                printf("%lf\n", err);
                fprintf(fp2,"%d %lf\n",i, err);

                if( absol(pre - prev) < acc){
                    break;
                }
            }


            if(fxm<0){
                xl = xm;
            }
            else{
                xh = xm;
            }
            prev = pre;

            i++;

        }

        printf("The root is : %.6lf\n", xm);
    }
    else{
        printf("No root is possible\n");
    }
}




int main(){

    first();

    second();

    return 0;
}
