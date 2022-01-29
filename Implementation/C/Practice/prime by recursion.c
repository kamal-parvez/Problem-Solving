#include<stdio.h>

int prime(int n,int i)
{
    if(n<2)
        return 0;

    if(i==n/2)
        return 1;
    if(n%i==0)
        return 0;
    return prime(n,i+2);

}

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        if(prime(n,2)==1)
            printf("Prime\n");
        else
            printf("Not prime\n");
    }
    return 0;
}

