#include<stdio.h>
main()
{
    int n,i,j,k,roll[100],marks[100];
    char name[100][20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&roll[i]);
        scanf("%s",name[i]);
        scanf("%d",&marks[i]);
    }

    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
    {
        if(marks[i]<marks[i+1])
        {
            swap(marks[i],marks[i+1]);
        }
    }
    }
}
