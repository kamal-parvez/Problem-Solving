#include<stdio.h>

int main()
{
    int n,m,k,l,d,i;
    char s;
    scanf("%d %d %d",&n,&m,&k);

    i=(k-1)/2 +1;
    l=(i-1)/m+1;

    if(i<=m)
    {
        d=i;
    }
    else
    {
        d=i%(m*(l-1));
    }

    if(k%2==0)
    {
        s='R';
    }
    else
        s='L';
    printf("%d %d %c\n",l,d,s);
    return 0;
}
