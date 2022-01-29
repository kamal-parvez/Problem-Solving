#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
    long long int l,i;
    int cnt=0;
    char str[100000];
    while(gets(str))
    {
        l=strlen(str);
        for(i=0;i<l;i++){
            if(str[i]=='"'){
                cnt++;
                if(cnt%2==0){
                    printf("''");
                }
                else if(cnt%2==1)
                    printf("``");
            }
            else{
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
