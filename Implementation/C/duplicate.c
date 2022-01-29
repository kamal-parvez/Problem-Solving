#include<stdio.h>
main()
{
    int a[100],n,i,j,c[100];
    scanf("%d",&n);
    for(i=0;i<100;i++){
        c[i]=0;
    }

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[a[i]]++;
    }

   /* for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(a[i]!=a[j]){

            }
        }
    }*/
    for(i=0;i<100;i++){
        if(c[i]!=0){
            printf("%d ",i);
        }
    }
    return 0;
}
