#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    int s=a+b;
    return s;
}

int main()
{
    int *ar,length,sum=0,i;

    printf("Enter the number of integers: ");
    scanf("%d",&length);
    ar=(int *)malloc(sizeof(int)*length);

    for(i=0;i<length;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&ar[i]);
        sum=add(sum,ar[i]);
    }

    printf("The average is %lf\n",(double)sum/length);

    return 0;
}
