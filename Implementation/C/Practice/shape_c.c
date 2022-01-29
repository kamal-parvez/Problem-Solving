#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=i;k<n;k++)
        {
            printf("c");

        }
        puts("");
    }

    for(i=1;i<n;i++)
    {
        for(j=i;j<n-1;j++)
            printf(" ");
        for(k=0;k<=i;k++)
        {
            printf("c");

        }
        puts("");
    }


    return 0;
}
