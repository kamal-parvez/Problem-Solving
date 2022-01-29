#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    gets(str);
    int i,j,k,a[7];
    for(i=0;i<7;i++)
    {
        a[i]=0;
    }

    for(i=0;str[i];i++)
    {
        if(str[i]=='B')
        {
            a[0]++;
        }
        else if(str[i]=='u')
        {
            a[1]++;
        }
         else if(str[i]=='l')
        {
            a[2]++;
        }
         else if(str[i]=='b')
        {
            a[3]++;
        }
         else if(str[i]=='a')
        {
            a[4]++;
        }
        else if(str[i]=='s')
        {
            a[5]++;
        }
         else if(str[i]=='r')
        {
            a[6]++;
        }
    }
    int count=10000000,flag=0;
    int x;
    x=a[1];
    x=x/2;
    a[1]=x;
    x=a[4];
    x=x/2;
    a[4]=x;

    for(i=0;i<7;i++)
    {
        if(a[i]<count)
            count=a[i];
    }
    printf("%d\n",count);

    return 0;
}
