#include<iostream>
using namespace std;
void insertarray(int arr[],int i)
{
	if(arr[i]<=arr[i/2])
		return;
	if(arr[i]>arr[i/2])
	{
		swap(arr[i],arr[i/2]);
	}
	insertarray(arr,i/2);
}
void prnt(int arr[],int i)
{
	if(i<=0)return;
prnt(arr,i-1);
cout<<arr[i]<<" ";//	printf("%d: %d \n",i,arr[i]);
}
int main()
{
	int arr[100],i=0,a,b,ch;

	while(1)
	{
cout<<"Enter your choice :";//		printf("Enter your choice :");
cin>>ch;//		scanf("%d",&ch);
		if(ch==1)
		{
			i++;
			cout<<"Enter your element to insert:";//printf("Enter your element to insert:");
			cin>>a;//scanf("%d",&a);

			arr[i]=a;
			if(i>1)
			insertarray(arr,i);
		}
		if(ch==2)
		{
			if(i!=0)prnt(arr,i);
			//printf("\n");
		}
	}
}
