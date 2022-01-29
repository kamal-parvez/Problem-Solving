#include<stdio.h>

int main()
{
    int a[100],n,i,j,k,c[1000];
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        j=a[i];
        c[j]++;
    }
    for(i=0,k=0;i<1000;i++)
    {
        if(c[i]>0)
        {
            for(j=1;j<=c[i];j++)
            {
               // printf("%d ",i);
               a[k]=i;
               k++;
            }
        }
    }
    if(n%2==1)
    {
        printf("%d\n",a[n/2]);
    }
    else
    {
        printf("%d %d\n",a[n/2-1],a[n/2]);
    }
    return 0;
}
