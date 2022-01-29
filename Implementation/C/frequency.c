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
    int max=0;
    for(i=0;i<100;i++){
        if(c[i]>max){
            max=c[i];
        }
    }

    for(i=0;i<100;i++){
        if(c[i]==max){
            printf("%d %d\n",i,max);
        }
    }

    return 0;
}
