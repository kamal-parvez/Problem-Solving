#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,j,flag=0;
    scanf("%s",str);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Paliandrome\n");
    }
    else
        printf("No,just a muggle string\n");
    return 0;
}
