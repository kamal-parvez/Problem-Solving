#include<stdio.h>

int main()
{
    int a[1000],count[2002],i,j,k,x,n,f;
    int num[1000],m[1000];
    scanf("%d",&n);
    for(i=0;i<2002;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        x=a[i];
        if(a[i]>=0)
        {
            count[x]++;
        }
        else
            count[x+2001]++;
    }
    int max=0;
    for(i=0;i<2002;i++)
    {
        if(count[i]>max)
        {
                max=count[i];
        }
    }

    for(i=0,j=0;i<2002;i++)
    {
        if(count[i]==max)
        {
                m[j]=count[i];
                num[j]=i;
                j++;
        }
    }
    for(i=0;i<j;i++)
    {
       if(num[i]>1000)
       {
            printf("%d %d\n",num[i]-2001,m[i]);
       }
    }

    for(i=0;i<j;i++)
    {
       if(num[i]<=1000)
       {
            printf("%d %d\n",num[i],m[i]);
       }
    }

    return 0;
}
