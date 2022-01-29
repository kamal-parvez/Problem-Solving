#include<stdio.h>

void back_print()
{
    char kp;
    if((kp=getchar())!='\n')
        back_print;
    putchar(kp);
}

int main()
{
    printf("Enter a line of text : ");
    back_print();
    return 0;
}
