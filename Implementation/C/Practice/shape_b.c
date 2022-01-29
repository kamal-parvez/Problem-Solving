#include<stdio.h>

main()
{
    int i,j,k;
    int n=11;
    int t;

    for(i=0;i<=n/2;i++)
    {
        for(k=0;k<i;k++)
            printf(" ");
        for(j=i;j<n-i;j++)
        {
            printf("c");
        }
        puts("");
    }
    t=n/2;

    for(i=1;i<=n/2;i++)
    {
        for(k=i;k<n/2;k++)
            printf(" ");
        for(j=1;j<t-1;j++)
        {
            printf("c");
        }
         t=t+2;
        puts("");

    }
    return 0;
}
