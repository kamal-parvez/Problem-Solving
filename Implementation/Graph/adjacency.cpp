#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int edge,ver,i,c,d,j,s;
	vector<int>a[10];
	cout<< "Enter your vertics number: ";
	cin>>ver;
	cout<<"Enter yout edge number : ";
	cin>>edge;
	for(i=0;i<edge;i++)
	{
		cin>>c>>d;
		a[c].push_back(d);
		a[d].push_back(c);
	}
	for(i=1;i<=ver;i++)
	{
		s=a[i].size();
		printf("size: %d : ",s);
		for(j=0;j<s;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
