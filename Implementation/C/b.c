#include<stdio.h>
#include<math.h>
main()
{
    int n,i,fac=1;
    scanf("%d",&n);
    if(n==0){
        fac=1;
    }
    for(i=1;i<=n;i++){
        fac=fac*i;
        fac=fac%10007;
    }
     printf("%d\n",fac);
    return 0;
}
