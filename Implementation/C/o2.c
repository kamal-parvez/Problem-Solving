#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        printf("%d %d",i,n-i+1);//Given an even integer N, print the sequence, 1 N 2 N-1 3 N-2 … N/2 N/2+1.
        if(i<n/2){
            printf(" ");
        }
    }
    printf("\n");
}
