#include<stdio.h>

//int num[1000];


void mergesort(int num[],int l,int h)
{
    if(l==h)
        return;
    int mid=(l+h)/2;
    mergesort(num,l,mid);
    mergesort(num,mid+1,h);

    int temp[1000];
    int i,j,k;
    for(i=l,j=mid+1,k=l;k<=h;k++)
    {
        if(i==mid+1)temp[k]=num[j++];
        else if(j==h+1)temp[k]=num[i++];
        else if(num[i]<=num[j])temp[k]=num[i++];
        else temp[k]=num[j++];
    }

    for(k=l;k<=h;k++)
        num[k]=temp[k];
}

int main()
{
     int num[1000];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    mergesort(num,0,n-1);

    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }

    return 0;
}
