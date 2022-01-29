#include<stdio.h>
main()
{

    int ara[100],i,n,j,k;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
       // for(j=i+1; j<n; j++)
       // {
       j=i+1;
            while(ara[i]==ara[j])
            {
                for(k=j-1; k<n; k++)
                {
                    ara[k]=ara[k+1];
                }
                n--;
                j++;
            }

       // }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
