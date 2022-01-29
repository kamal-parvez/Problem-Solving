#include<stdio.h>

void back_print()
{
    char ch;
    if((ch=getchar()) != '\n')
        back_print();
    putchar(ch);
}

main()
{
    printf("Type a line of text : ");
    back_print();
    return 0;
}
