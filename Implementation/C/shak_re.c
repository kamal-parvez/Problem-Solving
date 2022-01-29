#include<stdio.h>
int i,b[100];
void scan(int a[],int n);
void cpoy(int a[],int n);
void print(int n);

int main()
{
    int n,a[100];
    scanf("%d",&n);
    scan(a,n);
    cpoy(a,n);
    print(n);
    return 0;
}

void scan(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void cpoy(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
}
void print(int n)
{
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
