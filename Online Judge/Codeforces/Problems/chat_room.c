#include<stdio.h>
#include<string.h>


int main()
{
    char str[101];
    char sub[10]="hello";
    int i,l=0,j;
    scanf("%s",str);

    for(i=0,j=0;str[i];i++)
    {
        if(str[i]==sub[j])
        {
            j++;
        }
        if(sub[j]==NULL)
        {
            l=1;
            break;
        }
    }

    if(l==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}
