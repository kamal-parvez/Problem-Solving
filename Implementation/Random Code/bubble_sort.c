#include<stdio.h>

int main()
{
    int n,i,j,k,l,tem;
    int a[1000];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];

                }
                a[k-1]=NULL;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        if(a[i]!=NULL)
        printf("%d ",a[i]);
    }
    return 0;
}
