#include<stdio.h>

int main()
{
    long long n,m,a;
    scanf("%I64d %I64d %I64d",&n,&m,&a);

    long long s1,s2;
    long long b;

    if(n%a==0)
    {
        s1=n/a;
    }
    else
        s1=n/a+1;
    if(m%a==0)
        s2=m/a;
    else
        s2=m/a+1;
    b=s1*s2;
    printf("%I64d\n",b);
    return 0;
}
