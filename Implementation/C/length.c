#include<stdio.h>
int len(char a[])
{
    int n=0;
    while(a[n])
    {
        n++;
    }
    return n;
}
main()
{
    char a[100];
    int n;
    gets(a);
    n=len(a);
    printf("%d\n",n);
}
