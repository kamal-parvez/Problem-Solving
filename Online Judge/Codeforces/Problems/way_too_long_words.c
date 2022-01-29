#include<stdio.h>
#include<string.h>

int main()
{
    int l,i,n;
    char str[101][101];
    scanf("%d",&n);

     getchar();

    for(i=0;i<n;i++)
    {

        gets(str[i]);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(str[i]);
        if(l>10)
        {
             printf("%c%d%c\n",str[i][0],l-2,str[i][l-1]);
        }
        else
            printf("%s\n",str[i]);
    }
    return 0;
}
