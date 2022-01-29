#include<stdio.h>
#include<math.h>

float cost;
int cost_per_con(double Area)
{
    float ps;
    scanf("%f",&ps);
    cost = Area * ps;
    return cost;

}
int total_cost()
{   int n;
    scanf("%d",&n);
    float t=cost*n;
    return t;
}


int main()
{
    float r,h,pi=3.1416,Area;
    scanf("%f %f",&r,&h);
    Area= pi*r*r + 2*pi*r*h;
    float k,p;
    k=cost_per_con(Area);
    p=total_cost();
    printf("%f\n",k);
    printf("%f\n",p);
    return 0;

}
