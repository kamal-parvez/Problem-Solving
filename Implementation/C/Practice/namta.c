#include<stdio.h>

int main()
{
    int i,j,namta[10][10],sum=0,even=0,odd=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            namta[i][j]=(i+1)*(j+1);
            sum+=namta[i][j];
            if(namta[i][j]%2==0)
                even++;
            else
                odd++;
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d ",namta[i][j]);
        }
        printf("\n");
    }
    printf("odd = %d \n Even = %d \n SUM = %d\n",odd,even,sum);
    return 0;
}
