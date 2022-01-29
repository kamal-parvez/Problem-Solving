#include<stdio.h>
#include<math.h>

int main()
{
    int a[100],b[24];
    a[24]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,97}
    int n,i,j,k;

    scanf("%d",&n);

    for(i=0;i<24;i++)
    {
        b[i]=0;
    }

    for(i=2;i<n;i++)
    {
        for(j=0;j<24;j++)
        {
            if(a[j]==i)
                b[i]++;
        }
        if(j==24)
        {
            while()
            {
                i=i/a[k];
            }
        }

    }
}
