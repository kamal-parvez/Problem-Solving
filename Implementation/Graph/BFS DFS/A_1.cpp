#include<bits/stdc++.h>
using namespace std;

#define inf -100
#define nil -1
#define white 0
#define black 2
#define grey 1


struct breadth
{
    vector < int > v[1002];
    int node,edge;
    int color[1002],l[1002];

   void bfs(int src)
    {
        int i;
        for(i=1;i<=node;i++)
        {
            color[i]=white;//white=0==not visited
            //prev[i]=nil;
            l[i]=inf;
        }

        color[src]=grey; //gray = 1 = visited but not completely done
        l[src]=0;
        queue < int > q;
        q.push(src);

        while(!q.empty())
        {
            int t = q.front();
            q.pop();

            for(i=0;i<v[t].size();i++)
            {
                int u=v[t][i];
                if(color[u]==white)
                {
                    color[u]=grey;
                    //prev[u]=t;
                    l[u]=l[t]+1;
                    q.push(u);
                }
            }

            color[t]=black; //Black = 2 == completely visited and done

        }
    }
};

int main()
{
    int t,u;
    cin>>t;


    for(u=1;u<=t;u++)
    {
        breadth ds;
        int i,j,a,b;

        //cout<<endl;
        cin>>ds.node>>ds.edge;

        for(i=0;i<ds.edge;i++)
        {
            cin>>a>>b;
            //ds.ara[a][b]=1;
            ds.v[a].push_back(b);
            ds.v[b].push_back(a);

        }

    //memset(ds.l,-1,sizeof(ds.l));


        ds.bfs(0);

        for(i=1;i<ds.node;i++)
        {
            cout<<ds.l[i]<<endl;
        }

        if(u!=t)
            cout<<endl;

    }

    return 0;
}

