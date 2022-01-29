#include<stdio.h>

int year,fcost,tcost;

void fuel_cost(int f)
{
    fcost=f*year;
    printf("Total fuel cost = %d\n",fcost);
}
void total_cost(int ini)
{
    tcost=fcost+ini;
    printf("Total cost = %d\n",tcost);
}
void tax(double rate)
{
    double ttax=tcost*rate;
    printf("Total tax = %.2lf\n",ttax);
}
int main()
{
    scanf("%d",&year);
    fuel_cost(2300);
    total_cost(67000);
    tax(0.025);
    fuel_cost(2500);
    total_cost(62000);
    tax(0.025);
    return 0;
}
