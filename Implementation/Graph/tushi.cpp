#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
struct node
{
    int tt[10][10];
    int level[10];
    int color[10];
    int parent[10];

    void bfs(int a,int s,int b)
    {
        int t,i;
        memset(level,-1,sizeof level);
        memset(color,-1,sizeof color);
        memset(parent,-1,sizeof parent);
        queue<int>q;
        q.push(s);
        level[s]=0;
        color[s]=1;
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            for(i=1;i<=a;i++)
            {
            if(tt[t][i]==1 && level[i]==-1)
                    {
                        q.push(i);
                        level[i]=level[t]+1;
                        parent[i]=t;
                        color[i]=1;

                    }

            }
            color[t]=2;

        }
        /*for(i=0;i<b;i++)
        {
            printf("%d:  %d ",i,level[i]);
        }*/
    }
    void prntpath(int s,int v)
    {

        if(v==s)printf("%d ",s);
        else if(parent[v]==-1)
            printf("No path");
        else{
            prntpath(s,parent[v]);
            printf("%d ",v);
        }
    }
};
int main()
{
	int i,j;
	int a,b,c,d,s,ch,u,v;
	node t;
	cout<<"Enter your node number: ";
	cin>>a;
	cout<<"Enter your edge number: ";
	cin>>b;

	for(i=1;i<=b;i++)
	{
		cin>>c>>d;
		t.tt[c][d]=1;
		t.tt[d][c]=1;
	}

	cin>>u;
	cin>>v;

		t.bfs(a,u,b);
		if(t.level[v]!=-1)cout<<"length Shortest path is "<<t.level[v]<<endl;
		else{
			 cout<<"Path does not exist"<<endl;
		}
t.prntpath(u,v);

}

