#include<stdio.h>
#include<string.h>

int main()
{
    char s[23],t;
    int a[100],i,j,k,n,be,ad;
   // gets(s);
   // strcpy(*t[0],*s[0]);
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d %d",&be,&ad);
   for(i=0;i<n;i++)
   {
       if(a[i]==be)
       {
           for(j=n;j>i;j--)
           {
               a[j]=a[j-1];
               //printf("%d %d\n",a[j],a[j-1]);
           }

    a[i]=ad;
   // break;
   i++;
       }

   }
   for(i=0;i<n+1;i++)
   {
       printf("%d ",a[i]);
   }
   // printf("%s\n",t);
    return 0;
}
