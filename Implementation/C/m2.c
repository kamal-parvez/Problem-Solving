#include<stdio.h>
main()
{
    unsigned long long int f,a=0,b=1;//Given an integer N, find the Nth Fibonacci number FN.F0 = 0,F1 = 1,FN = FN-1 + FN-2//
    int n,i;
    scanf("%llu",&n);
    if(n==0){
        printf("%llu\n",a);
    }
    else if(n==1){
        printf("%llu\n",b);
    }
    else{
        for(i=2;i<=n;i++){
        f= a+b;
        a=b;
        b=f;
        }
    printf("%llu\n",f);
    }
    return 0;

}
