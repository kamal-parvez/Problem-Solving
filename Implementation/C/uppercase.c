#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    gets(a);
    printf("making uppercase of ur string....");
    delay(100);
    strupr(a);
    puts(a);
}
