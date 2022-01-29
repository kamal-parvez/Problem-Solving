#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,count=0;
    char str[50],flag;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&str[i]);
    }
    str[i]=NULL;
    //printf("%s\n",str);

    flag=str[0];
    for(i=1;i<n;i++)
    {
        if(flag==str[i])
            count++;
        else
        {
            flag=str[i];
        }
    }
    printf("%d\n",count);
    return 0;
}
