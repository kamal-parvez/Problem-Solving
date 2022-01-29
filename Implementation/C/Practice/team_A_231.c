#include<stdio.h>

struct team
{
    int p;
    int v;
    int t;
};

int main()
{
    struct team c[1001];
    int n,i,j,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&c[i].p,&c[i].v,&c[i].t);
    }

    for(i=0;i<n;i++)
    {
        j=0;
        if(c[i].p==1)j++;
        if(c[i].v==1)j++;
        if(c[i].t==1)j++;
        if(j>=2)l++;
    }
    printf("%d\n",l);
    return 0;
}
