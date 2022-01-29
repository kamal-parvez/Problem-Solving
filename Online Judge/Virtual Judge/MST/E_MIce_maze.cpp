#include<bits/stdc++.h>
using namespace std;

#define SZ 102

struct vertex
{

    int v;
    int w;

    bool operator<(const vertex &ob)const
    {
        return w<ob.w;
    }

} ver;


struct mice
{
    int cell,edge,exit,time;
    vector<vertex>vec[SZ];
    int dis[SZ];

    void input()
    {

        cin>>cell>>exit>>time>>edge;
        int u,v,w;

        for(int i=0; i<edge; i++)
        {
            cin>>u>>v>>w;
            ver.v=v;
            ver.w=w;
            vec[u].push_back(ver);
        }
    }

    void maze(int src)
    {
        priority_queue<vertex>pq;
        int i,j;
        vertex ver1;

        for(i=1; i<=cell; i++)
        {
            dis[i]=INT_MAX;
        }

        dis[src]=0;
        ver.v=src;
        ver.w=0;
        pq.push(ver);

        while(!pq.empty())
        {
            ver = pq.top();
            pq.pop();

            for(i=0; i<vec[ver.v].size(); i++)
            {
                ver1=vec[ver.v][i];

                if(dis[ver1.v] > dis[ver.v] + ver1.w)
                {
                    dis[ver1.v] = dis[ver.v] + ver1.w;
                    pq.push(ver1);
                }
            }
        }
    }

    void output()
    {
        maze(exit);
        int cnt=0;
        for(int i=1; i<=cell; i++)
        {
            if(dis[i]<=time)cnt++;
        }

        cout<<cnt<<endl;
    }
};



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        mice m;
        m.input();
        m.output();
        cout<<endl;
    }
    return 0;
}
