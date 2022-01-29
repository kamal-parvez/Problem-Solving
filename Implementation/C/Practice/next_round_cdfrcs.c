#include<stdio.h>
#include<string.h>

int main()

{
    char str[202],tem;
    int i,j,k,l;
    gets(str);

    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==65 || str[i]==69 || str[i]==73 ||str[i]==79 || str[i]==85 || str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117)
        {
            for(j=i;j<l;j++)
            {
                str[j]=str[j+1];
            }
            l--;
            str[l]=NULL;
            i--;
        }

        else
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }

            for(k=l;k>i;k--)
            {
                str[k]=str[k-1];
            }
            str[k]='.';
            l++;
            i++;
            str[l]=NULL;
        }
    }
    printf("%s\n",str);
    return 0;
}
