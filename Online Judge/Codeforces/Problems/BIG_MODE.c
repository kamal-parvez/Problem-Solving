#include<stdio.h>

int Bmod(int b,int p,int m)
{
    if(p==0)
        return 1;
    if(p%2==1)
    {
        int part1=b%m;
        int part2=Bmod(b,p-1,m);
        return (part1*part2)%m;
    }
    else
    {
        int part=Bmod(b,p/2,m);
        return (part * part)%m;
    }
}

int main()
{
    int b,p,m;
    scanf("%d %d %d",&b,&p,&m);
    printf("%d\n",Bmod(b,p,m));
    return 0;
}
