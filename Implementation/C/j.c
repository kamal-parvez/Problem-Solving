#include<stdio.h>
#include<math.h>
float cost_per_container();
main(){
     cost_per_container();
}
float  cost_per_container(){
    float h,r,a,b,s,pi=acos(-1),cost;
    scanf("%f %f",&r,&h);
    a=pi*r*r;
    b=2*pi*r*h;
    s=a+b;
    cost=32*s;
    printf("The cost per container is : %f\n",cost);
}
