#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i,t;
    scanf("%d %d",&n,&k);
    k=(240-k);

    i=25+ 40*k;
    t=sqrt(i);
    t=(t-5)/10;
    if(t>n)
    {
        t=n;
    }

    printf("%d\n",t);
}
