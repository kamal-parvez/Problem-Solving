#include<stdio.h>
int main()
{
	int i,n,count=1;
	int a;
	scanf("%d",&a);
	for(i=0;;i++)
	{
		a=a/10;
		if(a==0)break;
		else  count++;
	}
	printf("%d",count);
	return 0;
}
