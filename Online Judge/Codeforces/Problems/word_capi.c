#include<stdio.h>


int main()
{
    char str[1001];
    gets(str);
    if(str[0]>=97 && str[0]<=122)
        str[0]-=32;
    printf("%s\n",str);
    return 0;
}
