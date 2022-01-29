#include<stdio.h>
main()
{
    unsigned long long int a,b,i,p=1;
     scanf("%llu %llu",&a,&b);
     for(i=1;i<=b;i++){

        p=p*a;
     }
     printf("%llu\n",p);
     return 0;
}
