#include<stdio.h>
main()
{
    int a[100],b[100];
    int n,i,m;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<=100;i++){
        c[i]=0;
    }
    for(i=0;i<=100;i++){
        j=i;
        if(a[i]==j)
        c[i]++;
    }

}
