#include<stdio.h>

main()
{
    int h,s;
    double d;
    scanf("%d %d",&h,&s);
    d=h*s;
    printf("%.3lf\n",d/12.0);
    return 0;
}
