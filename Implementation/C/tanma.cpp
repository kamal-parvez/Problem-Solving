#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],d[100];
    int i,l,count=0,count0=0,count1=0,j,r;
    gets(s);
    l=strlen(s);
    for(i=0,j=0;i<l;i++)
    {
        if(s[i]=='R')count++;
        else if(s[i]!='R' && count>1)
        {
            d[j]=count;
            count=0;
        }
        //if(s[i]=='G')count0++;
        //else break;
       // if(s[i]=='B')count1++;
        //else break;
    }
    r=strlen(d);
    for(j=0;j<r;j++)
    {
    printf("%d",d[j]);
    }
    //printf("%d\n%d\n%d\n",count,count0,count1);
}
