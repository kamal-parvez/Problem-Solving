#include<stdio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    int *pos;
    gets(a);
    gets(b);
    pos=strstr(a,b);
    if(pos)
        printf("%s found at position %d.\n",b,pos);
    else
        printf("%s not found .\n",b);
    return 0;
}
