#include<bits/stdc++.h>
using namespace std;


#define SZ 1000
#define inf 100000

struct floyed
{
	int node,edge;
	int matrix[SZ][SZ];

	void input()
	{
		cin>>node>>edge;

		int i,u,v,j,w;

		for(i=0;i<node;i++)
		{
			for(j=0;j<node;j++)
			{
				matrix[i][j]=inf;
				if(i==j)matrix[i][j]=0;

			}
		}

		for(i=0;i<edge;i++)
		{
			cin>>u>>v>>w;
			matrix[u][v]=w;
		}

	}

	void warshal()
	{
		int i,j,k;

		for(i=0;i<node;i++)
		{
			for(j=0;j<node;j++)
			{
				for(k=0;k<node;k++)
				{
					matrix[j][k] = min(matrix[j][k],matrix[j][i]+matrix[i][k]);
				}
			}
		}
	}

	void output()
	{
		int i,j;

		for(i=0;i<node;i++)
		{
			cout<<"Shortest path from "<<i<<"th node ***"<<endl;

			for(j=0;j<node;j++)
			{
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};


int main()
{
	floyed fl;
	fl.input();
	fl.warshal();
	fl.output();

	return 0;
}
