#include<stdio.h>
main()
{
    unsigned long long int a,b,c;
    int n,i;
    scanf("%d",&n);
    scanf("%llu",&a);
    for(i=1;i<=n-1;i++){
        scanf("%llu",&b);
        while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }

    }
    printf("%llu\n",a);
    return 0;
}
