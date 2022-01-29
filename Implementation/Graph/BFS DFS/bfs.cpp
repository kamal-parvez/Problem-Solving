#include<bits/stdc++.h>
using namespace std;


struct breadth
{
    int ara[100][100],n,l[100],e;
    vector < int > v[100];

    void bfs(int src)
    {
        queue < int > q;
        l[src]=0;
        q.push(src);

         while(!q.empty())
         {
            int t = q.front();
            q.pop();

            for(int i=1;i<=n;i++)
            {
                if(ara[t][i]==1 && l[i]==-1)
                {
                    l[i]=l[t]+1;
                    q.push(i);
                }
            }
         }
    }
};
int main()
{
    breadth ds;
    int i,j,a,b,u,v;
    cin>>ds.n>>ds.e;

    for(i=0;i<ds.e;i++)
    {
        cin>>a>>b;
        ds.ara[a][b]=1;
        //ds.v[a].push_back(b);
    }

    memset(ds.l,-1,sizeof(ds.l));


    cin>>u>>v;

    //vector print
   /* for(i=1;i<=ds.n;i++)
    {
        cout<<i<<" ";
        for(j=0;j<ds.v[i].size();j++)
            cout<<ds.v[i][j]<<" ";
        cout<<endl;
    }*/


    ds.bfs(u);

    if(ds.l[v]!=-1)
        cout<<"length Shortest path is "<<ds.l[v-1]<<endl;
    else
        cout<<"Path does not exist"<<endl;


    return 0;
}

