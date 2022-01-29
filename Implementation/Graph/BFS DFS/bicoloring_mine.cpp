#include<bits/stdc++.h>
using namespace std;

#define inf -100
#define nil -1
#define white 0
#define red 1
#define blue 2


struct breadth
{
    vector < int > v[202];
    int node,edge;
    int color[202],prev[100],l[202];

    bool bicoloring(int src)
    {
        int i;

        memset(color,white,sizeof(color));

        color[src]=red;

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
                    if(color[t]==red)
                        color[u]=blue;
                    else
                        color[u]=red;
                    q.push(u);
                }
                if(color[t]==color[u])
                    return false;
            }

        }
        return true;
    }

};

int main()
{
    while(1)
    {
        breadth ds;
        int i,j,a,b,u,v;
        cin>>ds.node;

        if(ds.node==0)
            break;

        cin>>ds.edge;



        for(i=0;i<ds.edge;i++)
        {
            cin>>a>>b;
            ds.v[a].push_back(b);
             ds.v[b].push_back(a);

        }

        bool bi=ds.bicoloring(1);

        if(bi==true)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;

    }
    return 0;
}
