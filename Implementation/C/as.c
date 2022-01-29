#include<stdio.h>
void sum_of_all(int s){
    int sum=0,n;
    for(n=0;n<s;n++)sum+=n;
    printf("sum of all numbers from 1 to %d is %d \n",s,sum);
}

void main()
{

    sum_of_all(200);
    sum_of_all(500);
}
