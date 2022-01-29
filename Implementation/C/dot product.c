#include<stdio.h>
main()
{
    int v1[100],v2[100],n,i,dot=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&v2[i]);
    }
    for(i=0;i<n;i++){
        dot+=v1[i]*v2[i];
    }
    printf("%d\n",dot);
    return 0;
}
