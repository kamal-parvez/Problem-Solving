#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int l,flag=0,i;
   // getchar();
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==72 || str[i]==81 || str[i]==57)
        {
            printf("YES\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    return 0;
}
