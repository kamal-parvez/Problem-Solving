#include<stdio.h>
#include<string.h>
#include<math.h>

char bin[100];
int dec=0,len;

int con(int i,int power)
{
    if(i==len)
        return dec;

        dec+=(bin[i]-'0') * pow(2,power);
    return con(i+1,power-1);
}

int main()
{
    scanf("%s",bin);
    int power;
    len=strlen(bin);
    power=len-1;
    int i=con(0,power);
    printf("%d\n",i);
    return 0;
}
