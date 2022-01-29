#include<stdio.h>
char copy(char *a,char *b)
{
    while(*b++=*a++)
    ;

}
main()
{
    char c[100],d[100];
    gets(c);
    copy(c,d);
    printf("%s\n",d);
}
