#include<stdio.h>

char concat(char a[],char b[])
{
    while(*a)
        a++;
    while(*a++=*b++)
        ;
}
main()
{
    char a[30],hj[100];
    gets(a);
    gets(hj);
    concat(a,hj);
    printf("%s\n",a);
}
