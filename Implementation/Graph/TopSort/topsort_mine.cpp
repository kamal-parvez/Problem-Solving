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
    stack <int > st;
    int node,edge,time;
    int color[100],prev[100];
    int d[100],f[100];

    void dfs()
    {
        int i;
        for(i=1;i<=node;i++)
        {
            color[i]=white;//white=0==not visited
            prev[i]=nil;
            d[i]=inf;
            f[i]=inf;
        }
        time=0;
        for(i=1;i<=node;i++)
        {
            if(color[i]==white)
                dfs_visit(i);
        }
    }

    void dfs_visit(int u)
    {
        color[u]=grey;
        time++;
        d[u]=time;

        for(int i=0;i<v[u].size();i++)
        {
            int p=v[u][i];
            if(p==white)
            {
                prev[p]=u;
                dfs_visit(p);
            }
        }

        st.push(u);

        color[u]=black;
        time++;
        f[u]=time;

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

    while(!ds.st.empty())
    {
        cout<<ds.st.top()<<" ";
        ds.st.pop();
    }
    return 0;
}


