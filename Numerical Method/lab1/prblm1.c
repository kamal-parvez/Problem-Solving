#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fact(int x){
    int res = 1;
    for(int i=1; i<=x; i++){
        res *= i;
    }

    return res;
}

double absol(double x){
    if(x<0){
        x *= (-1.0);
    }
    return x;
}

double fun(double x, int n){

   double res = 0;
   for(int k=0; k<=10; k++){
        int p1 = -1;
        double p2 = 1.0;

        for(int i = 0; i<=k; i++){
            p1 *= (-1);
            p2 *= (x*x)/4;
        }

        int p3 = fact(k);
        int p4 = fact(n+k);

        res += (p1 * p2)/(p3 * p4);
   }

   double part = 1.0;

   for(int i = 1; i<=n; i++){
        part *= x/n;
   }

   return part * res;
}


void first(){
    FILE *fp1 = fopen("graph1.csv","w");
    FILE *fp2 = fopen("graph2.csv","w");
    FILE *fp3 = fopen("graph3.csv","w");


    for(int n = 0; n<3; n++){
        double x = 0;
        double fx;
        while(x<=10){
            fx = fun(x, n);
            if(n==0)
                fprintf(fp1,"%lf %lf\n",x, fx);
            if(n==1)
                fprintf(fp2,"%lf %lf\n",x, fx);
            if(n==2)
                fprintf(fp3,"%lf %lf\n",x, fx);

            x += 0.1;
        }

    }
}



void second(){

    double x = 1;
    double fx;

    printf("-------------Table 1--------------\n");
    printf("X ------------f(x) \n");

    while(x<=3){
        fx = fun(x, 0);
        printf("%lf   %lf\n",x, fx);
        x += 0.1;
    }

    double lo, hi, mid, err, prev, pres, acc;

    printf("Enter the initial guess point : ");
    scanf("%lf %lf", &lo, &hi);
    printf("Enter the accuracy level : ");
    scanf("%lf", &acc);



    FILE *fp1 = fopen("bi_out1.csv","w");
    FILE *fp2 = fopen("bi_out2.csv","w");


    double p1 = fun(lo, 0);
    double p2 = fun(hi, 0);

    double p = p1 * p2;

    if(p<0){

        printf("Itr --- XL      --- XH       --- XM       --- f(XM)     --- Error\n");
        int i =1;

        while(1){

            mid = (lo + hi)/2.0;

            double fxm = fun(mid, 0);

            pres = mid;

            if(absol(pres - prev) < acc){
                break;
            }

            double xxx = (pres - prev) / (pres * 1.0);
            err = absol(xxx) * 100.0;


            printf("%d  --- %lf --- %lf --- %lf --- %lf --- ", i, lo, hi, mid, fxm);

            if(i == 1)
                printf("---\n");
            else{
                printf("%f\n", err);
                fprintf(fp1,"%lf %lf\n",mid, err);
                fprintf(fp2,"%d  %lf\n",i, err);
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
         printf("The root is : %.6lf\n", mid);
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
