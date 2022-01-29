#include<stdio.h>
int main()
{
    int a=103 , b[4]={1,2,3,4,5};
    int *p;

    p=&a;
    p=b+2;
    printf("%d %d %d\n",a,*p,p);
    a++;
     printf("%d %d %d\n",a,*p,p);

     printf("%d\n",*(p));

     char *k;
     char s[]="ABCDE";


    return 0;
}
