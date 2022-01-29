#include<bits/stdc++.h>
using namespace std;
double func(double y)
{
 double one= 9.8*y/15;
 double two=1-exp(-(15/y)*9);
 double three = (one*two)-35;
 return three;
}
int main()
{
 FILE *BI_1=fopen("BI(xm-err).txt","w");
 FILE *BI_2=fopen("BI(itr-err).txt","w");
 FILE *FP_1=fopen("FP(xm-err).txt","w");
 FILE *FP_2=fopen("FP(itr-err).txt","w");
 double lo,hi,xo,xm,a;
 int step=0;
 printf("\nGive Low, High, Accuracy: ");
 scanf("%lf %lf %lf",&lo,&hi,&a);
 if(func(lo)*func(hi)>0)
 {
 printf("Finding root is not possible\n");
 return 0;
 }
 if(func(lo)>0 && func(hi) <0 )
 {
 xo=hi;
 hi=lo;
 lo=xo;
 }
 printf(" y f(y)\n");
 for(double x=lo; x<=hi+0.00001; x+=.1)
 {
 double y=func(x);
 printf("%5.1lf%15.6lf\n",x,y);
 }
 double LOW=lo;
 double HIGH=hi;
 double A=a;
 xo=0,xm=0;
 printf("\n\nUsing Bisection\n");
 printf(" Itr Xlow Xhigh Xmid f(Xmid) Rel. Approx. Error\n");
 printf("--------------------------------------------------------------------------\n");
 while(fabs(lo-hi)>a)
 {
 step++;
 xo=xm;
 xm=(hi+lo)/2;
 double y= func(xm);
 printf("%5d%12.6lf%12.6lf%12.6lf%12.6lf%12.6lf\n",step,lo,hi,xm,y,fabs((xm-xo)/xm)*100);
 fprintf(BI_1,"%.5lf %.5lf\n",xm,fabs((xm-xo)/xm)*100);
 fprintf(BI_2,"%d %.5lf\n",step,fabs((xm-xo)/xm)*100);
 if(y>0) hi=xm;
 else lo=xm;
 }
 double high,low;
 xm=0,xo=0;
 step=0;
 lo=LOW;
 hi=HIGH;
 a=A;
 printf("\n\nUsing False-position\n");
 printf(" Itr Xlow Xhigh Xmid f(Xmid) Rel. Approx. Error\n");
 printf("----------------------------------------------------------------------\n");
 while(step<20)
 {
 step++;
 xo=xm;
 high=func(hi);
 low=func(lo);
 xm=(hi*low-lo*high)/(low-high);
 double fxm = func(xm);
 printf("%5d%12.6lf%12.6lf%12.6lf%12.6lf%12.6lf\n",step,lo,hi,xm,fxm,fabs((xmxo)/xm)*100);
 fprintf(FP_1,"%.5lf %.5lf\n",xm,fabs((xm-xo)/xm)*100);
 fprintf(FP_2,"%d %.5lf\n",step,fabs((xm-xo)/xm)*100);
 if(fxm>0) hi=xm;
 else lo=xm;
 }
}
