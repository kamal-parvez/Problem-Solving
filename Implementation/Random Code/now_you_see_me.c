#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],a[100];

    gets(a);
    gets(str);
    int i,j,k,l,count=0;
    for(i=0;str[i];i++)
    {
        k=i;
        for(j=0;a[j];j++)
        {
            if(str[k]!=a[j])
            {
                break;
            }
            k++;
        }
        if(!a[j])
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("found %d times\n",count);
    }
    else
        printf("Not found\n");
}
