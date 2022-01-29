#include<stdio.h>
#include<string.h>

int main()
{
    char str[100][20];
    int a[100],i,j,n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        a[i]=1;
    }

    for(i=0;i<n;i++)
    {
        if(str[i][0]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(str[i],str[j])==0)
                {
                    a[i]++;
                    str[j][0]=-1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(str[i][0]!=-1)
        {
            printf("%s %d\n",str[i],a[i]);
        }
    }
    return 0;
}
