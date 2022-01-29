#include<stdio.h>

struct bit
{
    char str[5];
};

int main()
{
    struct bit b[151];
    int i,j,x=0,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",b[i].str);
    }

    for(i=0;i<n;i++)
    {
        if(strcmp(b[i].str,"X++")==0)x++;
        if(strcmp(b[i].str,"++X")==0)x++;
        if(strcmp(b[i].str,"X--")==0)x--;
        if(strcmp(b[i].str,"--X")==0)x--;
    }
    printf("%d\n",x);
}
