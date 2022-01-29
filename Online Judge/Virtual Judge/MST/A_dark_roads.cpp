#include<bits/stdc++.h>
using namespace std;

#define SZ 200002

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
    int node,edge,cost=0;
    bool vis[SZ];

    vector<vertex>vec[SZ];
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

        cost+=ed.val;

        spaning(ed.v);
    }

};


int main()
{
    int i,j,u,v,w,k;

    while(1)
    {
		int total=0;

        minimum_spaning_tree mst;

        cin>>mst.node>>mst.edge;

        if(mst.node==0 && mst.edge==0)
			break;

        for(i=1; i<=mst.edge; i++)
        {
            cin>>u>>v>>w;
            ver.in=v;
            ver.val=w;
            mst.vec[u].push_back(ver);
            ver.in=u;
            mst.vec[v].push_back(ver);
            total+=w;
        }


        for(i=1; i<=mst.node; i++)
        {
            mst.vis[i]=false;
        }

        mst.spaning(1);


        cout<<total-mst.cost<<endl;
        mst.cost=0;
    }

    return 0;
}



