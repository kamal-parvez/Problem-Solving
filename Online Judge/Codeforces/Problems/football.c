#include<stdio.h>
#include<string.h>

int main()
{
    char str[102],a[7]="1111111",b[7]="0000000";
    int i,j,k,l=0,flag=0;
    gets(str);

    for(i=0;str[i];i++)
    {
        k=i;
        for(j=0;j<7;j++)
        {
            if(str[k]!=a[j])
            {
              //  flag=1;
                break;
            }
            k++;
        }
        if(j==7)
        {
            flag=1;
            break;
        }

    }
    if(flag!=1)
    {
        for(i=0;str[i];i++)
    {
        k=i;
        for(j=0;j<7;j++)
        {
            if(str[k]!=b[j])
            {
              //  flag=1;
                break;
            }
            k++;
        }
        if(j==7)
        {
            flag=1;
            break;
        }

    }
    }
    if(flag==1)printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
