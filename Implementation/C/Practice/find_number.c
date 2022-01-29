#include<stdio.h>

int main()
{
    int a[20]={1,4,5,7,9,10,22,23,25,27,29,45,54,58,68,70,87,88,89,96};

    int n=68;
    int i;

    for(i=0;i<20;i++)
    {
        if(a[i]==n)
        {
            printf("Yes , got it\n");
            break;
        }
    }
    return 0;

}
