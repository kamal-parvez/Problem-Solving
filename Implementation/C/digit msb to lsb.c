#include<stdio.h>
main()
{
    int n,a,j,rev=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        rev=rev*10 + a;
    }
    while(rev!=0){
        j=rev%10;
        rev=rev/10;
        printf("%d\n",j);
    }
    return 0;
}
