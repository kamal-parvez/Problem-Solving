#include<stdio.h>
#include<math.h>
main()
{
    unsigned long long int n,x,i,j;
    scanf("%llu",&n);
    for(i=1;i<=sqrt(n);i++){
        j=i*i;
        printf("%llu",j);
        if(j<n){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
