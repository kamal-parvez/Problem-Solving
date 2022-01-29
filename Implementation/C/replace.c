#include<stdio.h>
#include<string.h>
main()
{
    char st[100],a[100],b[100],tem[100];
    gets(st);
    gets(a);
    gets(b);
    int i,j,k,pos=-1,l;
    l=strlen(a);
    for(i=0;st[i] && (pos==-1);i++)
        for(j=i,k=0;st[j]==a[k];j++,k++)
        if(!a[k+1])
        pos=i;

    if(pos!=-1)
    {
        for(j=0;j<pos;j++)
            tem[j]=st[j];
        for(i=0;b[i];i++,j++)
            tem[j]=b[i];
        for(k=pos+l;st[k];k++,j++)
            tem[j]=st[k];
        tem[j]=NULL;
        for(i=0;st[i]=tem[i];i++)
            ;
        puts(st);
    }
}
