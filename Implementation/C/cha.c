#include<stdio.h>
main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=90){
        printf("Uppercase letter\n");
    }
    else if(c>=97 && c<=122){
            printf("Lowercase letter\n");
    }
    else{
        printf("Digit\n");
    }
    return 0;
}
