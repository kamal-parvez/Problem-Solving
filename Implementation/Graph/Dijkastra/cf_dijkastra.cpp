#include<bits/stdc++.h>
using namespace std;


#define inf 10000000
#define nil 0

struct vertex
{
    int in;
    int val;

    bool operator <(const vertex &ob)const
    {
        return val<ob.val;
    }
};


struct dijkastra
{
    int node,edge;
    int dis[100002],prev[100002];
    vector<vertex>vec[100002];

    void bfs_modified(int src)
    {
        priority_queue<vertex>pq;

        vertex ver,u,v;
        int i,t;

        for(i=1;i<=node;i++)
        {
            dis[i]=inf;
            prev[i]=nil;
        }

        dis[src]=0;

        u.in=src;
        u.val=0;

        pq.push(u);

        while(!pq.empty())
        {
            u=pq.top();
            pq.pop();

            for(i=0;i<vec[u.in].size();i++)
            {
                v=vec[u.in][i];

                if(v.val + dis[u.in]<dis[v.in])
                {
                    dis[v.in] = v.val + dis[u.in];
                    prev[v.in] = u.in;
                    pq.push(v);
                }
            }
        }
    }

    void print_path(int u)
    {
        if(u==nil)
            return;
        print_path(prev[u]);
            cout<<u<<" ";
    }
};

int main()
{
    dijkastra dij;
    vertex ver;
    int i,a,b,w;

    cin>>dij.node>>dij.edge;

    for(i=1;i<=dij.edge;i++)
    {
        cin>>a>>b>>w;
        ver.in=b;
        ver.val=w;
        dij.vec[a].push_back(ver);
        ver.in=a;
        ver.val=w;
        dij.vec[b].push_back(ver);
    }

    dij.bfs_modified(1);

   /* for(i=2;i<=dij.node;i++)
    {
        cout<<dij.dis[i]<<" ";
    }*/
    int u=dij.node;

    if(dij.dis[u]!=inf)
        dij.print_path(u);
    else
        cout<<-1<<endl;

    return 0;
}
