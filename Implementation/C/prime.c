#include<stdio.h>
main()
{
    unsigned long long a,b,i,j;
    scanf("%llu %llu",&a,&b);
    for(i=a;i<=b;i++){
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                break;
            }
        }
        if(j>sqrt(i)){
            printf("%llu\n",i);
        }
    }
    return 0;
}
