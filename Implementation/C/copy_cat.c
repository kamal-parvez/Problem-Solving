#include<stdio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    strcpy(a+5,b+3);
    strcat(a,"ghorar dim");
    printf("%s\n",a);

}
