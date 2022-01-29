#include<stdio.h>
#include<math.h>

int main()
{
    int n,n1,n2,i,tem,j;
    unsigned long long int a[100000],sum1=0,sum2=0;
    double mean;
    scanf("%d %d %d",&n,&n1,&n2);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }

    if(n1>n2)
    {
        for(i=0;i<n2;i++)
        {
            sum1+=a[i];
        }
        for(i=n2;i<n1+n2;i++)
        {
            sum2+=a[i];
        }

        mean = sum1/(float)n2 +sum2/(float)n1;
    }
    else
    {
     for(i=0;i<n1;i++)
        {
            sum1+=a[i];
        }
        for(i=n1;i<n1+n2;i++)
        {
            sum2+=a[i];
        }

        mean = sum1/(float)n1 +sum2/(float)n2;
    }
    printf("%lf\n",mean);
    return 0;

}
