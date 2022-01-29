#include<stdio.h>

int main()
{
    int i,j,k,n=20;

    for(i=1;i<=n/2;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("c");
        }
        for(j=i;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("c");
        }
        printf("\n");
    }
    return 0;
}
