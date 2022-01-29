#include<stdio.h>
main()
{
    int i,j,a,b,count=1,n,c;
    scanf("%d",&i);
    while(i/10!=0){
            i=i/10;
            count=count+1;
    }
    printf("%d\n",count);
    return 0;
}
