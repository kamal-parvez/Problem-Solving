#include<stdio.h>
#include<string.h>
#include<math.h>

char bin[100];
int dec=0;

int conversion(int i,int power,int len)
{
    if(i==len)
        return dec;
    dec+=(bin[i]-'0')*pow(2,power);
    return conversion(i+1,power-1,len);
}
int main()
{
    scanf("%s",bin);
    int len,power;
    len=strlen(bin);
    power=len-1;
    printf("%d",conversion(0,power,len));
    return 0;

}
