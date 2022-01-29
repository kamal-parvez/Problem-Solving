#include<stdio.h>

int main()
{
    int x,n,i;
    scanf("%d",&n);
    double m;
    for(i=n+1;i<=1000001;i++)
    {
        m=(i-1)/n;
        if(m-(int)m==0)
        {
            printf("%.0lf\n",m);
            break;
        }
    }
    return 0;
}
