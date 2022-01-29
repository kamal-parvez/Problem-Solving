#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,a[100],x;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        a[i]=1;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(a[i]==1)
        {
            for(j=2;j*i<=n;j++)
            {
                x=i*j;
                a[x]=0;
            }

        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
