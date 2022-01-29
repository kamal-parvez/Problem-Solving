#include<stdio.h>
main()
{
    unsigned long long int a,b,c;
    scanf("%llu %llu",&a,&b);
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }

    printf("%llu\n",a);
    return 0;
}
