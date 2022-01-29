#include<stdio.h>

int main()
{
    int x=10;
    int *p;
    printf("X= %d\n",x);

    p=&x;

    *p=20;

    printf("X = %d\n",x);

    x=15;

    printf("x = %d\n",x);

    printf(" LOacation = %p value %d\n",p,*p);

    printf("Address of x : %p\n",&x);
    printf("Value of p  : %p\n",p);

    return 0;
}
