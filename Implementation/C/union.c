#include<stdio.h>
main()
{
    int a[100],b[100],i,j,m,n,c[100];
    scanf("%d",&m);
    for(i=0;i<100;i++){
        c[i]=0;
    }
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
        c[b[i]]++;
    }
    for(i=0;i<100;i++){
        if(c[i]!=0){
            printf("%d ",i);
        }
    }
    printf("\n");
    for(i=0;i<100;i++){
        if(c[i]>1){
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}
