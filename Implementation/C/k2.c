#include<stdio.h>
main()
{
    int a,b,i;//Given two integers, A and B, print numbers divisible by 3 or 5 but not both from A to B inclusive.
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if((i%5==0 || i%3==0) && (i%15!=0)){
            printf("%d\n",i);
        }
    }
    return 0;
}
