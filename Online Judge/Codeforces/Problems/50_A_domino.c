#include<stdio.h>

int main()
{
    int m,n,i=0,t;
    scanf("%d %d",&m,&n);

    t=m/2 * n;
    if(m%2==1)i=n/2;
    t=t+i;
    printf("%d\n",t);
    return 0;
}
