#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,a[100],j;
    char str[100][20];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        a[i]=1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(str[i],str[j])==0)
                {
                    a[i]++;
                    a[j]=0;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
       if(a[i]!=0)
       {
            printf("%s %d\n",str[i],a[i]);
       }
    }
    return 0;
}

