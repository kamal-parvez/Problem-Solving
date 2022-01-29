#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%c",&str[i]);
    }
    i=0;
    while(i<n-1)
    {
        if(str[i]==str[i+1])
        {
            count++;
            for(j=i+1;j<n-1;j++)
            {
                str[j]=str[j+1];
            }

        }
        else
            i++;
    }
    printf("%d\n",count);
    return 0;

}


