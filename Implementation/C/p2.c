#include<stdio.h>
main()
{
    int n,i;//Given an integer N, find all the divisors of N.
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
