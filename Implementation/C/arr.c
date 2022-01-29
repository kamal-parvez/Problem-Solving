#include<stdio.h>
#define N 5
void fun(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    a[3]=200;
}

main()
{
    int kp[N]={10,20,30,40,50};
    fun(kp);
    printf("%d\t",kp[3]);
}
