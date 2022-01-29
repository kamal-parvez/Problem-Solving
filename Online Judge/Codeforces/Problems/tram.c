#include<stdio.h>


int main()
{
    int n,ara[1000][2];
    int i,j,max=-1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&ara[i][0],&ara[i][1]);
    }

    int sum=0;
    for(i=0;i<n;i++)
    {
        sum-=ara[i][0];
        sum+=ara[i][1];
        if(sum>max)
            max=sum;
    }

    printf("%d\n",max);

    return 0;
}
