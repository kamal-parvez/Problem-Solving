#include<stdio.h>
main()
{
    int ara[100],c[100],i,n,j;
    scanf("%d",&n);
    for(i=0;i<100;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        c[ara[i]]++;
    }
    for(i=0;i<100;i++){
        if(c[i]!=0){
            for(j=0;j<c[i];j++){
                printf("%d ",i);
            }
        }
    }
    return 0;
}
