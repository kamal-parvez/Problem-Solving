#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],b[100],ma[100],mi[100];
    int i,j,k,l,max=0,min=1000;
   // getchar();
    gets(str);

    l=strlen(str);
    for(i=0;i<l;)
    {
        k=0;
        for(j=i;str[j]!=32;j++)
        {
            b[k]=str[j];
            k++;
        }
        b[k]=NULL;
        if(k>max)
        {
            max=k;
            strcpy(ma,b);
        }
        if(k<min)
        {
            min=k;
            strcpy(mi,b);
        }
        i=j+1;
    }
    printf("Minimum : %s\n",mi);
    printf("Maximum : %s\n",ma);
    return 0;
}
