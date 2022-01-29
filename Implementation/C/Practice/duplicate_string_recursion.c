#include<stdio.h>
#include<string.h>

char str[100];
int l;

void trans(int i)
{
    if(str[i]==NULL)
        return;
    str[i]=str[i+1];
    trans(i+1);
}

void dup(int i,int j)
{
    if(i==l)
        return;
    if(str[i]==str[j])
      {
           trans(j);
           l--;
          dup(i,j);
      }
      if(j==l)
        dup(i+1,j=i+2);
      else
        dup(i,j+1);


}

int main()
{
    //sgetchar();
    while(1)
    {
        scanf("%s",str);
    l=strlen(str);
    dup(0,1);
    printf("%s",str);
    }
    return 0;
}
