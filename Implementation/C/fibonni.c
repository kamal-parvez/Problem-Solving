#include<stdio.h>

int main()
{
    int n,i,fi,a=0,b=1;
    scanf("%d",&n);

    if(n==0)
    {
        fi=a;
    }
    if(n==1)
    {
        fi=b;
    }
    else
    {
            for(i=2;i<=n;i++)
        {
            fi=a+b;
            a=b;
            b=fi;
        }
    }
    printf("%d th fibonacci is %d\n",n,fi);
    return 0;
}
