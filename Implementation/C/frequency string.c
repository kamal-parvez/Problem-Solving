#include<stdio.h>
#include<string.h>
main()
{
    char a[100][100];
    int n;
    int i,j,count[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }


    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(strcmp(a[i],a[j])==0)
               {
                    count[i]++;

               }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
        printf("%d\n",count[i]);
    }
}
