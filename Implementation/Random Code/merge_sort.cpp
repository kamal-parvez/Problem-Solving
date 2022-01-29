#include<stdio.h>

void merge(int left[],int right[],int l,int r)
{
    int leftindex=0,r8index=0;
    int res[l+r];
    int j=0;
    while(leftindex<l || r8index<r)
    {
        if(left[leftindex]<=right[r8index])
        {
            res[j]=left[leftindex];
            leftindex++;
        }
        else
        {
            res[j]=right[r8index];
            r8index++;
        }
        j++;
    }

}

void mergesort(int a[],int n)
{
    if(n==1)
        return;
    int l=0,mid;
    mid=(l+n-1)/2;
    int left[mid+1];
    int right[mid+1],i,j,k;
    for(i=l,j=0,k=0;i<n;i++)
    {
        if(i<=mid)
        {
            left[j]=a[i];
            j++;

        }
        else
        {
            right[k]=a[i];
            k++;
        }
    }
    mergesort(left,mid+1);
    mergesort(right,mid+1);

    merge(left,right,j+1,k+1);

}



int main()
{
    int ara[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    mergesort(ara,n);

    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
