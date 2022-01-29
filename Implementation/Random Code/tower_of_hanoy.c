#include<stdio.h>

void tower(int n,int src,int des,int aux)
{
    if(n==0)
        return;
    tower(n-1,src,aux,des);
    printf("move %d th disk from %d to %d\n",n,src,des);
    tower(n-1,aux,des,src);
}

int main()
{
    int n;
    scanf("%d",&n);
    tower(n,1,3,2);
    return 0;

}
