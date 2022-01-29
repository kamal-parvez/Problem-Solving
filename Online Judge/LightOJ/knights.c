#include<stdio.h>
#include<math.h>

int fun(int n)
{
    if(n%4==0)
        return n;
    else if(n%2==1)
        return n+1;
    else
        return n+2;
}

int main()
{
    int i,t,m,n,a,res;
    double c;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&m,&n);

        if(m==1 || n==1)
        {
            res=m*n;
        }

        else if(m==2 || n==2)
        {
            if(m==2)
                res=fun(n);
            else
                res=fun(m);
        }

        else
        {
            c=ceil((m*n)/2.0);
            res=c;
        }

        printf("Case %d: %d\n",i,res);
    }

    return 0;
}

