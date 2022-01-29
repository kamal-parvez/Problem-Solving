#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],tem;
    int l,i,j,k,a[100];
   // getchar();
    gets(str);
    l=strlen(str);

    for(i=0;i<l;i++)
    {
        a[i]=1;
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    for(i=0;i<l;i++)
    {

        for(j=i+1;j<l;j++)
        {
            if(str[i]>str[j])
            {
                tem=str[i];
                str[i]=str[j];
                str[j]=tem;
            }
        }

    }

    for(i=0;i<l;i++)
    {
        if(a[i]!=0)
        {
            for(j=i+1;j<l;j++)
            {
                if(str[i]==str[j])
                {
                    a[i]++;
                    a[j]=0;
                }
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!=0)
        {
            if(str[i]>=65 && str[i]<=90)
            printf("%c : %d\n",str[i],a[i]);
        }
    }
    return 0;
}
