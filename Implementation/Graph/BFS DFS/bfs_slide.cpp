#include<bits/stdc++.h>
using namespace std;

#define inf -100
#define nil -1
#define white 0
#define black 2
#define grey 1


struct breadth
{
    vector < int > v[100];
    int node,edge;
    int color[100],prev[100],l[100];

   void bfs(int src)
    {
        int i;
        for(i=1;i<=node;i++)
        {
            color[i]=white;//white=0==not visited
            prev[i]=nil;
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
                    prev[u]=t;
                    l[u]=l[t]+1;
                    q.push(u);
                }
            }

            color[t]=black; //Black = 2 == completely visited and done

        }
    }


    void print_path(int s,int v)
    {
        if(v==s)
            cout<<s<<" ";
        else if(prev[v]==nil)
            cout<<"No Path"<<endl;
        else
        {
            print_path(s,prev[v]);
            cout<<v<<" ";
        }
    }
};

int main()
{
    breadth ds;
    int i,j,a,b,u,v;
    cin>>ds.node>>ds.edge;

    for(i=0;i<ds.edge;i++)
    {
        cin>>a>>b;
        //ds.ara[a][b]=1;
        ds.v[a].push_back(b);
    }

    //memset(ds.l,-1,sizeof(ds.l));


    cin>>u>>v;

    ds.bfs(u);



    //level print
   /* for(i=1;i<=ds.node;i++)
        cout<<ds.l[i]<<" ";
    cout<<endl;*/



    if(ds.l[v]!=inf)
    {
        cout<<"length Shortest path is "<<ds.l[v]<<endl;
        //for(i=0)
    }
    else
        cout<<"Path does not exist"<<endl;


        ds.print_path(u,v);



}
