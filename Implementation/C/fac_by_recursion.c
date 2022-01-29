#include<stdio.h>

long int factorial(long int n)
{
    if(n<=1)
        return 1;
    else
        return (n*factorial(n-1));
}

main()
{
    long int fac;
    int n;
    scanf("%d",&n);
    fac=factorial(n);
    printf("factorial is %ld\n",fac);
    return 0;
}
