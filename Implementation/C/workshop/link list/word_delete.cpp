#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char *p;
    int n,i=0,j,cnt=0;
    gets(str);
    scanf("%d",&n);
    while(1)
    {

        if(cnt!=n)
        {
            for(;str[i]!=32;i++)
            {
               ;
            }
             p=str+i+1;
             cnt++;
             i++;
        }
        else
            break;
    }
   // printf("%s\n",str);
    printf("%s\n",p);
    return 0;
}
