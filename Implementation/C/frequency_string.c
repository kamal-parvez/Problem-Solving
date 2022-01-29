#include<stdio.h>
#include<string.h>
main()
{
    char a[100][100];
    int n;
    int i,j,count[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)count[i]=1;

    for(i=0,j=0;i<n;i++)
    {

            if(strcmp(a[i],a[j])==0)
               {
                    count[i]++;


               }


    }
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
        printf("%d\n",count[i]);
    }
}
