#include<stdio.h>
main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int x;
    x= strcmp(a,b);
    printf("%d\n",x);
}
