#include<stdio.h>

int main()
{
    int a[100][100],i,j,k,sum=0,s[100][100];
    int m,n,p,q;
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[100][100];
    scanf("%d %d",&p,&q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
        printf("Not Possible\n");

    else
    {
        for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<p;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            s[i][j]=sum;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",s[i][j]);
        }
        puts("");
    }
    }
    return 0;
}
