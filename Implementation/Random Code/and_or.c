#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],b[1000],max[1000],min[1000];
    int i=0,j,k,l,max1=0,min1=1000;

    gets(str);
    l=strlen(str);

    while(i<l)
    {
        for(j=i,k=0;str[j]!=32;j++)
        {
            b[k]=str[j];
            k++;
        }
        b[k]=NULL;
        if(k<min1)
        {
             min1=k;
             strcpy(min,b);
        }
        if(k>max1)
        {
            max1=k;
            strcpy(max,b);
        }
        i=j+1;
    }

    printf("Maximum : %s\n",max);
    printf("Minimum : %s\n",min);
    return 0;
}
