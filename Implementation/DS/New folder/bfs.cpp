#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	int i,j;
	int a,b,c,d,t;
	int tt[10][10];
	int level[10];
	cout<<"Enter your vertics number: ";
	cin>>a;
	cout<<"Enter your node number: ";
	cin>>b;
	for(i=0;i<b;i++)
	{
		cin>>c>>d;
		tt[c][d]=1;
		tt[d][c]=1;
	}
	memset(tt,-1,sizeof(tt));
	queue<int>q;
	q.push(tt[0][0]);
	level[tt[0][0]]=0;
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(tt[i][j]==1 && level[tt[i][j]]==-1)
				{
					q.push(tt[i][j]);
					level[tt[i][j]]=level[tt[i][j]]+1;
				}
			}
		}

	}
	for(i=0;i<a;i++)
	{
		printf("%d ",level[i]);
	}
}
