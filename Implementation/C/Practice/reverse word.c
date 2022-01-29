#include<stdio.h>

int main()
{
    char str[1000],tem;
    int i,j,k,p,t,l=0;

    gets(str);

    for(i=0;str[i];i++)
    {
        l++;
    }

    for(i=0;i<l/2;i++)
    {
        tem=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=tem;
    }
    i=0;
    while(str[i])
    {
        l=0;
        p=i;
        for(;str[i]!=32 && str[i]!=NULL;i++)
        {
            l++;
        }
        for(j=p,t=0;j<p+l/2;j++,t++)
        {
            tem=str[j];
            str[j]=str[i-1-t];
            str[i-1-t]=tem;
        }
        i++;
    }
    printf("%s\n",str);
    return 0;
}
