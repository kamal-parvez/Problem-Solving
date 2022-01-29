#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    int *p=&x;
    x=10;
    x++;
   // (*p)++;
    //p++;
    char *k;
    k="this is kamal";
    printf("%lf %d %p\n",x,*p,p);
    printf("%s\n",*k);
}
