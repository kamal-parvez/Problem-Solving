#include<stdio.h>
main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j,k;
    for(i=0;a[i];i++){
        for(j=i,k=0;a[j]==b[k];j++,k++)
        {
             if(!b[k+1])
                printf("Yes\n");
        }
    }

    if(!b[k])
        printf("No\n");
}
