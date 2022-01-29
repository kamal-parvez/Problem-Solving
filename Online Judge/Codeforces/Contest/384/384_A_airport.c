#include<stdio.h>
#include<string.h>

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    char str[100000];
    getchar();
    gets(str);

    if(str[a-1]==str[b-1])
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
