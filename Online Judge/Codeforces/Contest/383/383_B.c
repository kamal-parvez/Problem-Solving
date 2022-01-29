#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,count=0,k;

    int x,y,i,res=0,n,d,j;

    scanf("%d %d",&a,&b);

    int c[1000];
    for(j=0;j<a;j++)
    {
        scanf("%d",&c[j]);
    }


    for(j=0;j<a-1;j++)
{
    for(k=j+1;k<a;k++)
    {
        if(c[j]>c[k]) i=log(c[j])/log(2) +1;
        else
            i=log(c[k])/log(2) +1;
   for(n=0;n<=i;n++)
   {
       d=pow(2,n);

       res+= d*(((c[j]/d)%2 + (c[k]/d)%2)%2);
   }
   if(res==b)
    count++;
   res=0;
    }

}

  printf("%d\n",count);
  return 0;
}
