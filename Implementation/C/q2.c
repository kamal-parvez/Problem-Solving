#include<stdio.h>
main()
{
    unsigned long long int x,i,y,n,j=0,k;
    scanf("%llu %llu",&x,&n);//Given an integer X, print Nth (1-indexed, MSD to LSD) digit of X.
    y=x;
    while(x){
        x=x/10;
        j++;
    }
    for(i=1;i<=(j-n+1);i++){
        k=y%10;
        y=y/10;
    }
    printf("%llu\n",k);
    return 0;
}
