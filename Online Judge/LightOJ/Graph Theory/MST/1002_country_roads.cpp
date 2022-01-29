#include<bits/stdc++.h>
using namespace std;

#define SZ 502
#define inf 21111
#define nil -1

struct vertex
{
    int in;
    int val;
} ver;

struct Edge
{
    int u;
    int v;
    int val;

    bool operator<(const Edge &ob)const
    {
        return val>ob.val;
    }
} ed;


struct minimum_spaning_tree
{
    int node,edge;
    int dis[SZ];
    int cost[SZ][SZ];
    int prev[SZ];
    bool vis[SZ];

    vector<vertex>vec[SZ];
    //vector<vertex>tree[SZ];
    priority_queue<Edge>pq;

    void spaning(int src)
    {

        int i,j,k;
        vis[src]=true;

        for(i=0; i<vec[src].size(); i++)
        {
            ver=vec[src][i];
            if(vis[ver.in]==true)
                continue;
            ed.u=src;
            ed.v=ver.in;
            ed.val=ver.val;
            pq.push(ed);

        }

        while(1)
        {
            if(pq.empty())
                return;
            ed=pq.top();
            pq.pop();
            if(vis[ed.v]==false)
            {
                break;
            }

        }

        cost[ed.u][ed.v]=ed.val;
        cost[ed.v][ed.u]=ed.val;
        prev[ed.v]=ed.u;

        spaning(ed.v);
    }

    int path(int u)
    {
        if(prev[u]==nil)
            return 0;

        int mx = path(prev[u]);
        int x = cost[u][prev[u]];

        if(x>mx)
            return x;
        else
            return mx;
    }

};


int main()
{
    int i,j,u,v,w,k,cost=0,t;

    cin>>t;

    for(k=1; k<=t; k++)
    {
       // cout<<endl;

        minimum_spaning_tree mst;

        cin>>mst.node>>mst.edge;

        for(i=1; i<=mst.edge; i++)
        {
            cin>>u>>v>>w;
            ver.in=v;
            ver.val=w;
            mst.vec[u].push_back(ver);
            ver.in=u;
            mst.vec[v].push_back(ver);
        }

        int src;
        cin>>src;

        for(i=0; i<mst.node; i++)
        {
            mst.vis[i]=false;
            mst.prev[i]=nil;
        }

        memset(mst.cost,-1,sizeof(mst.cost));

        mst.spaning(src);

        cout<<"Case "<<k<<":"<<endl;

        for(i=0; i<mst.node; i++)
        {
            int x = mst.path(i);
            if(x>0 || i==src)
                cout<<x<<endl;
            else
                cout<<"Impossible"<<endl;

        }

        /*for(i=0; i<mst.node; i++)
        {
            cout<<i<<"th node's edges are "<<endl;

            for(j=0; j<mst.node; j++)
            {
                if(mst.cost[i][j]!=-1)
                {
                    cout<<j<<" "<<mst.cost[i][j]<<endl;
                }
            }
            //cout<<endl;
        }*/

    }

    return 0;
}


