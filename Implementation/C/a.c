#include<stdio.h>
#include<math.h>
main()
{
    int n,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(n%i==0){
            printf("Not Prime\n");
            break;
        }
    }
    if(i==n){
        printf("Prime\n");
    }
    return 0;
}
