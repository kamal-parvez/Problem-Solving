#include<bits/stdc++.h>
using namespace std;


struct depth
{
    int ara[100][100],n,vis[100],e;
    vector < int > v[100];

    void dfs(int u)
    {
        vis[u]=1;

        for(int i=0;i<v[u].size();i++)
        {
            int t=v[u][i];
            if(!vis[t])
                dfs(t);
        }
    }
};
int main()
{
    depth ds;
    int i,j,a,b,u,v;
    cin>>ds.n>>ds.e;

    for(i=0;i<ds.e;i++)
    {
        cin>>a>>b;
        //ds.ara[a][b]=1;
        ds.v[a].push_back(b);
    }

    memset(ds.vis,0,sizeof(ds.vis));


    cin>>u>>v;

    //vector print
   /* for(i=1;i<=ds.n;i++)
    {
        cout<<i<<" ";
        for(j=0;j<ds.v[i].size();j++)
            cout<<ds.v[i][j]<<" ";
        cout<<endl;
    }*/


    ds.dfs(u);

    if(ds.vis[v]==1)
        cout<<"Path is available"<<endl;
    else
        cout<<"Path does not exist"<<endl;


    return 0;
}
