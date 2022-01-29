#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
vector<int>vec[MAX];
int a[MAX][MAX],level[MAX];
queue <int> q;
void bfs(int source)
{
    level[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        for(int i=0;i<vec[t].size();i++)
        {
            int p=vec[t][i];
            if(level[p]==-1)
            {
                level[p]=level[t]+1;
                q.push(p);
            }
        }

    }
}
main()
{
    int nodes,edges,n,i,u,v;
    cout<<"Enter the number of nodes & edeges"<<endl;
    cin>>nodes>>edges;
    for(i=0;i<edges;i++)
    {
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    memset(level,-1,sizeof(level));
    cout<<"1 - Check edge between u and v using adjacency matrix"<<endl;
    cout<<"2 - Check edge between u and v using adjacency list"<<endl;
    cout<<"3 - Check path between u and v"<<endl;
    cout<<"4 - Shortest path"<<endl;
    while(1)
    {

        cin>>n;
        if(n==1)
        {
            cin>>u>>v;
            if(a[u][v]) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(n==2)
        {
            cin>>u>>v;
            int f=0;
            for(i=0;i<vec[u].size();i++)
            {
                if(vec[u][i]==v)
                {
                    cout<<"Yes"<<endl;
                    f=1;
                    break;
                }
            }
            if(f=0) cout<<"No"<<endl;
        }
        else if(n==4)
        {
            cin>>u>>v;
            memset(level,-1,sizeof(level));
            //memset()
            bfs(u);
            if(level[v]!=-1)
            {
            cout<<"Shortest path is "<<level[v]<<endl;

            }
            else
            {
                cout<<"Path does not exists"<<endl;
            }
        }
    }
}
