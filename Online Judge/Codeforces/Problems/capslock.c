#include<stdio.h>


int main()
{
    int i,flag=0;
    char str[100];
    scanf("%s",str);



    for(i=1;str[i];i++)
    {
        if(!(str[i]>=65 && str[i]<=90))
        {
                flag=1;
        }
    }

    if(flag!=1)
    {
        for(i=0;str[i];i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]+=32;
            }
            else if(str[0]>=97 && str[0]<=122)
                    str[0]-=32;
        }
    }

    printf("%s\n",str);

    return 0;
}
