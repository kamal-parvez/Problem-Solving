#include<stdio.h>
#include<math.h>

int main()
{
    int a[4][100],i,j;
    int n;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        a[3][i]=(a[0][i]/4) + (a[1][i]/4) + (a[2][i]/2);
    }
    for(i=0;i<n;i++)
    {
        printf("the marks of %d th is %d\n",i,a[3][i]);
    }
    return 0;
}
