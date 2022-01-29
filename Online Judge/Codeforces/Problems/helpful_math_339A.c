#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];

    scanf("%s",str);

    int i,a=0,b=0,c=0;

    for(i=0;str[i];i+=2)
    {
        if(str[i]=='1')
            a++;
        else if(str[i]=='2')
            b++;
        else if(str[i]=='3')
            c++;

    }

    for(i=0;str[i];i+=2)
    {
        if(a!=0)
        {
            str[i]='1';
            a--;
        }
        else if(b!=0)
        {
            str[i]='2';
            b--;
        }
        else
        {
            str[i]='3';
            c--;
        }
    }

    printf("%s\n",str);

    return 0;
}
