#include<stdio.h>

int main()
{
    int a[20]={1,4,5,7,9,10,22,23,25,27,29,45,54,58,68,70,87,88,89,96};

    int n=40;
    int low_index=0,high_index=20;

    while(low_index<high_index)
    {
        int mid_index = (low_index + high_index) /2;

        if(a[mid_index]==n)
        {
            printf("Yes,get it\n");
            break;
        }
        else if(a[mid_index]<n)
            low_index=mid_index+1;
        else if(a[mid_index]>n)
            high_index=mid_index -1;
    }

    if(low_index==high_index)
        {
            printf("Not found\n");
        }
    return 0;

}
