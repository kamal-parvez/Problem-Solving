#include<bits/stdc++.h>
using namespace std;

#define inf 100000


struct vertex{
    int in;
    int val;

    bool operator<(const vertex &ob)const{
        return val>ob.val;
    }
};

struct dijkstra
{
    int node,edge,cost[100][100],distance[100];

    void BFSmodified(int source)
    {
        int v;
        vertex ver,u,t;
        priority_queue <vertex> q;

        for(int j=0;j<=node;j++)
            distance[j]=inf;

        distance[source]=0;

        ver.val=0;
        ver.in=source;
        q.push(ver);


        while(!q.empty())
        {
            u=q.top();
            q.pop();

            for(v=1;v<=edge;v++)
            {
                if(cost[u.in][v]!=inf && (distance[u.in] + cost[u.in][v]) < distance[v])
                {
                    distance[v]=distance[u.in]+cost[u.in][v];

                    t.in=v;
                    t.val=cost[u.in][v];

                    q.push(t);
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


