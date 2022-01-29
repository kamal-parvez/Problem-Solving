#include<bits/stdc++.h>
using namespace std;

#define inf 100000

struct dijkstra
{
    int node,edge,cost[100][100],distance[100];

    void BFSmodified(int source)
    {
        int u,v;
        queue < int > q;

        for(int j=0;j<=node;j++)
            distance[j]=inf;

        q.push(source);
        distance[source]=0;

        while(!q.empty())
        {
            u=q.front();
            q.pop();

            for(v=1;v<=edge;v++)
            {
                if(cost[u][v]!=inf && (distance[u] + cost[u][v]) < distance[v])
                {
                    distance[v]=distance[u]+cost[u][v];
                    q.push(v);
                }

            }
        }
    }
};

int main()
{
    dijkstra d;

    cin>>d.node>>d.edge;

    for(int i=0;i<=d.node;i++)
        for(int j=0;j<=d.node;j++)
            d.cost[i][j]=inf;

    int i,j,k,u,v,x;

    for(i=1;i<=d.node;i++)
    {
        cin>>u>>v>>x;
        d.cost[u][v]=x;
    }

    while(1)
    {
        cin>>u>>v;

        if(u==0)break;

        d.BFSmodified(u);

        cout<<"Shortest path is : "<<d.distance[v]<<endl;

       /* for(i=1;i<=d.node;i++)
            cout<<d.distance[i]<<" ";
        cout<<endl;*/
    }

    return 0;
}
