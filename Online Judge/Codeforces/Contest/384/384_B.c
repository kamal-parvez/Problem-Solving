#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long long int k,i,z,c,j,p;
    int n,b;
    scanf("%d %llu",&n,&k);

    double a;
    c=pow(2,n);
    if(k%2==1)
       {
            b=1;
       }

    else
    {
        for(i=1;i<=c;i++)
        {
            j=2*k;
            p=2*i-1;
        z=j/p;
        a=log(z)/log(2);
         b=a;
        if(b-a==0)
        {
            break;
        }
        }
    }
    printf("%d\n",b);
    return 0;
}
