#include<stdio.h>

int main()
{
    int i,j,n,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("c");
        }
        printf("\n");
    }
     for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("c");
        }
        puts("");
    }
    return 0;
}
