#include<stdio.h>
main()
{
    unsigned long long int a,n,i,p=1,sum=0;
    scanf("%llu %llu",&a,&n);
    for(i=1;i<=n/2;i++){

        p=p*a;
        p=p%10007;
        sum+=p;
        sum=sum%10007;//Given two integers, A and N, find the value of the sequence A + A2 + A3 + A4 + … + AN. Print the answer modulo 10007.


     }
     if(n%2==0){
        sum=sum+p*sum;
        sum=sum%10007;
     }
     else{
        p*=a;
        p%=10007;
        sum=sum+p+p*sum;
        sum%=10007;
     }
     printf("%llu\n",sum);
     return 0;
}
