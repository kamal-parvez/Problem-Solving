#include<stdio.h>
int main()
{
    int x=10,y;
    int *p;

    printf("Value of x : %d\n",x);

    p=&x;
    y=*p;
    *p=15;

    printf("Value of x : %d\n",x);
    printf("Value of y : %d\n",y);
    printf("Value of *p : %d\n",*p);
    printf("Address of x : %d\n",&x);
    printf("Address of y : %d\n",&y);
    printf("Value of p : %d\n",p);
    return 0;
}
