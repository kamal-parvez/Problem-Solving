#include<bits/stdc++.h>
using namespace std;


#define inf -100
#define nil -1
#define white 0
#define black 2
#define grey 1

struct depth
{
    vector < int > v[100];
    int node,edge,time,count;
    int color[100],prev[100];
    int d[100],f[100];
    bool cycle;

    depth()
    {
        cycle=false;
        count=0;
    }

    void dfs()
    {
        int i;
        for(i=1;i<=node;i++)
        {
            color[i]=white;//white=0==not visited
            prev[i]=nil;
        }

        for(i=1;i<=node;i++)
        {
            if(color[i]==white)
                dfs_visit(i);
        }

    }

    void dfs_visit(int u)
    {
        color[u]=grey;

        for(int i=0;i<v[u].size();i++)
        {
            int p=v[u][i];

            if(color[p]==grey)
            {
                count++;
                cycle=true;
            }
            if(color[p]==white)
            {
               // prev[p]=u;
                dfs_visit(p);
            }
        }
    }

};

int main()
{
    depth ds;
    int i,j,a,b,u,v;
    cin>>ds.node>>ds.edge;

    for(i=0;i<ds.edge;i++)
    {
        cin>>a>>b;
        ds.v[a].push_back(b);
    }

    ds.dfs();

    if(ds.cycle==true)
        cout<<"Cycle exists and the number of cycle is "<<ds.count<<endl;
    else
        cout<<"cycle does not exist"<<endl;


}



