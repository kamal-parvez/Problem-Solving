#include<stdio.h>
#include<string.h>
main()
{
    char a[100][100],tem[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s[^\n]",a[i]);
    for(i=0;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(tem,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],a[i]);
            }
        }
    }
    for(i=0;i<n;++i)
    {
        puts(a[i]);
    }
    return 0;
}
