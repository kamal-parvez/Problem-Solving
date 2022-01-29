#include<stdio.h>
main()
{
    long long int x,n,i,j;
    scanf("%lld %lld",&x,&n);//Given an integer X, print Nth (1-indexed, LSD to MSD) digit of X.
    for(i=1;i<=n;i++){
        j=x%10;
        x=x/10;
    }
    printf("%lld\n",j);
    return 0;
}
