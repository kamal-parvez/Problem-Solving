#include<iostream>
using namespace std;

void mergesort(int a[],int l,int h)
{
    if(l==h)
        return;
    int mid=(l+h)/2;

    mergesort(a,l,mid);
    mergesort(a,mid+1,h);\

    int temp[1000];
    int i,j,k;
    i=l;
    j=mid+1;
    for(k=l;k<=h;k++)
    {
        if(i==mid+1)
            temp[k]=a[j++];
        else if(j==h+1)
            temp[k]=a[i++];
        else if(a[i]<=a[j])
            temp[k]=a[i++];
        else
            temp[k]=a[j++];
    }

    for(k=l;k<=h;k++)
        a[k]=temp[k];
}

int main()
{
    int ara[1000];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    mergesort(ara,0,n-1);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";

    return 0;
}
