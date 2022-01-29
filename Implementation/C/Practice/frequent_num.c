#include<stdio.h>

int main()
{
    int a[1000],count[2002],max[1000],num[1000];
    int i,j,m=0,n,x;
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
    for(i=0;i<2002;i++)
    {
        if(count[i]>m)
        {
            m=count[i];
        }
    }
    for(i=0,j=0;i<2002;i++)
    {
        if(count[i]==m)
        {
            max[j]=count[i];
            num[j]=i;
            j++;
        }
    }
   for(i=0;i<j;i++)
    {
       if(num[i]>1000)
       {
            printf("%d %d\n",num[i]-2001,max[i]);
       }
    }

    for(i=0;i<j;i++)
    {
       if(num[i]<=1000)
       {
            printf("%d %d\n",num[i],max[i]);
       }
    }
    return 0;
}
