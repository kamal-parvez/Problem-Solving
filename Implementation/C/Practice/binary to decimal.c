#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[100];

    int i,j,dec=0,power;
    scanf("%s",a);
    j=strlen(a);
    power=j-1;

    for(i=0;i<j;i++)
    {
        dec = dec + (a[i]-'0')* pow(2,power);
        power--;
    }
    printf("%d\n",dec);
    return 0;

}
