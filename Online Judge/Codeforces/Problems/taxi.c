#include<stdio.h>
#include<math.h>


int main()
{
    int n,a[5],i,j=0,k=0,arr[100000];
    scanf("%d",&n);

    for(i=0;i<5;i++)a[i]=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a[arr[i]]++;
    }

    if(a[1]>a[3])
    {
        a[1]=a[1]-a[3];
        j=a[3];

    }
    else
    {
        j=a[3];
        a[1]=0;

    }
    if(a[2]%2==1)
    {
        k=2;
    }
        j+=a[2]/2;

    k=a[1]+k;
    double m;
    m=k/4.0;
    k=ceil(m);
    j+=k+a[4];

    printf("%d\n",j);

    return 0;
}
