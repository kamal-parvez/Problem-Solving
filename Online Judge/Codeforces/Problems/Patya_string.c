#include<stdio.h>
#include<string.h>

int main()
{
    char str[101],ab[101];
    int t;
    scanf("%s",str);
    scanf("%s",ab);
    int i,j;

    for(i=0;str[i];i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }

    for(i=0;ab[i];i++)
    {
        if(ab[i]>=97 && ab[i]<=122)
        {
            ab[i]-=32;
        }
    }
    t=strcmp(str,ab);
    printf("%d\n",t);
    return 0;
}
