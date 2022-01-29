#include<stdio.h>

int BigMod(int b,int p,int m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        int half=BigMod(b,p/2,m);
        return (half*half)%m;
    }
    else
    {
        int part1=b%m;
        int part2 = BigMod(b,p-1,m);
        return (part1*part2)%m;
    }
}

int main()
{
    int b,p,m;
    scanf("%d %d %d",&b,&p,&m);

    printf("%d\n",BigMod(b,p,m));
    return 0;
}
