#include<stdio.h>
main()
{
    int n,i;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=(i%26)+'A';
        printf("%c",c);
    }
    printf("\n");//Given an integer N, print first N characters of the character sequence, ABCDEF...VWXYZ…ABCDE…
    return 0;
}
