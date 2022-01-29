#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],mitu[100];
  //  char *p;
    int i,a[100],j,k=0,n,cnt=1;
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==32)
        {
            cnt++;
        }
    }

    for(i=0;i<cnt;i++)
    {
        scanf("%d",&a[i]);
    }

    int start,edn;
    for(i=0;i<cnt;i++)
    {
        for(j=0,n=0;n<=a[i];j++)
        {   start=0;edn=0;
            if(str[j]==32)
            {
                n++;
            }
            if(n==a[i]-1)start=j+1;
            if(a[i]==n || str[j])
            {
                edn=j;
                printf("######%d   %d\n\n",start,edn);

            for(start,k;start<edn;start++,k++)
            {
                mitu[k]=str[start];
            }
            mitu[k]=32;
            break;
            }

        }
        n=0;
    }
    str[k]=NULL;
    printf("%s\n",mitu);
    return 0;

}
