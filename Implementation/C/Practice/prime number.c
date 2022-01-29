#include<stdio.h>

int prime(int n)
{
    int i;
    if(n<2)
        return 0;
    if(n%2==0)
        return 0;
    for(i=3;i<n/2;i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        if(prime(n)==1)
            printf("Prime\n");
        else
            printf("Not prime\n");
    }
    return 0;
}
