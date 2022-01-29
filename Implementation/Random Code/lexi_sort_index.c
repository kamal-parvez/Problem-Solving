#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,a[100],t;
    char str[100][100];

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        a[i]=i;
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>=0)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    puts("");
    return 0;
}
