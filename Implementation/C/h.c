#include<stdio.h>
main()
{
 int ch[10];
 gets(ch);
 int i;
 for(i=0; i<10; i++)
 {
 if(ch[i]>=97 && ch[i]<=122)
 {
 ch[i]='A'+(ch[i]-'a');

 }



 }
printf("%s\n",ch);


}
