#include<stdio.h>
main()
{
    unsigned long long int x,y;
    int n,j=0,k,i;
    scanf("%llu %d",&x,&n);
    y=x;
    while(x){
        x=x/10;
        j++;
    }
    for(i=1;i<=j-n+1;i++){
        k=y%10;
        y=y/10;
    }
    printf("%d\n",k);
    return 0;
}
