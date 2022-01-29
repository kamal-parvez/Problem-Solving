#include<stdio.h>


int main()
{
    int n,m,z,c,lcd,k;
    scanf("%d %d %d",&n,&m,&z);

    lcd=n*m;

    while(n)
    {
        c=n;
        n=m%n;
        m=c;
    }

    lcd=lcd/m;

    double b=floor(z/(double)lcd);
    printf("%d\n",(int)b);
    return 0;
}
