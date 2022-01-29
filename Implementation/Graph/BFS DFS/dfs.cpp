#include<bits/stdc++.h>
using namespace std;


struct depth
{
    int ara[100][100],n,vis[100],e;
    //vector < int > v[100];

    void dfs(int u)
    {
        vis[u]=1;

        for(int i=1;i<=n;i++)
        {
            if(ara[u][i]==1 && vis[i])
                dfs(i);
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
        ds.ara[a][b]=1;
       // ds.v[a].push_back(b);
    }

    memset(ds.vis,0,sizeof(ds.vis));

    cin>>u>>v;

    ds.dfs(u);

    if(ds.vis[v]==1)
        cout<<"Path is available"<<endl;
    else
        cout<<"Path does not exist"<<endl;


    return 0;
}
