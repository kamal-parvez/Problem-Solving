#include<stdio.h>

int main()
{
    int num;
    char ch;
    double d_num;
    float f_num;

    printf("%lu\n",sizeof(num));
    printf("Size if int : %d\n",sizeof(num));
    printf("Size if char : %d\n",sizeof(ch));
    printf("Size if double : %d\n",sizeof(d_num));
    printf("Size if float : %d\n",sizeof(f_num));

    return 0;
}
