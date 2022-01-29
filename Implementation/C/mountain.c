#include<stdio.h>
main()
{
    int ara[100],i,n,count=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=1;i<n-1;i++){
        if(((ara[i] < ara[i-1]) && (ara[i] < ara[i+1])) ||  ((ara[i] > ara[i-1]) && (ara[i] > ara[i+1]))){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
