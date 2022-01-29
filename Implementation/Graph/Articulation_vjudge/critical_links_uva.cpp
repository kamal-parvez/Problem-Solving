#include<bits/stdc++.h>
using namespace std;


#define inf -100
#define White 1
#define Grey 2
#define Black 3
#define Nil 4


struct bridge
{
    int c1;
    int c2;

    bool operator<(const bridge &ob)const
    {
        if(c1==ob.c1)
            return c2<ob.c2;
        else
            return c1<ob.c1;
    }
};

struct telephone
{
    int node,edge,time,cnt;
    int prev[10000],color[10000],dis[10000],low[10000];
    vector<int>vec[10000];

    bridge br[10000];

    void dfs()
    {
        int i;

        for(i=0; i<node; i++)
        {
            dis[i]=inf;
            prev[i]=Nil;
            color[i]=White;
        }

        time=0;
        cnt=0;

        for(i=0; i<node; i++)
        {
            if(color[i]==White)
            {
                dfs_visit(i);
            }
        }
    }

    void dfs_visit(int u)
    {
        time++;
        dis[u]=time;
        color[u]=Grey;
        low[u]=time;
        int t;

        for(int i=0; i<vec[u].size(); i++)
        {
            t=vec[u][i];

            if(t==prev[u])continue;

            if(color[t]==Grey)
                low[u]=min(low[u],dis[t]);
            else if(color[t]==White)
            {
                prev[t]=u;
                dfs_visit(t);
                low[u]=min(low[u],low[t]);
            }

            if(dis[u]<low[t])
            {
                if(u<t)
                {
                    br[cnt].c1=u;
                    br[cnt].c2=t;
                }
                else
                {
                    br[cnt].c1=t;
                    br[cnt].c2=u;
                }
                cnt++;
            }
        }
    }
};


int main()
{
    int n=0,u,v,i,x;
    char str[10],br;

    while(cin>>n)
    {
        telephone tl;

        //cin>>tl.node;

        tl.node = n;

        for(int i=0; i<tl.node; i++)
        {
            scanf("%d (%d)",&u,&x);

            for(int j=0; j<x; j++)
            {
                cin>>v;
                tl.vec[u].push_back(v);
            }

        }


        tl.dfs();

        sort(tl.br,tl.br+tl.cnt);

        cout<<tl.cnt<<" critical links"<<endl;

        for(int j=0; j<tl.cnt; j++)
        {
            cout<<tl.br[j].c1<<" - "<<tl.br[j].c2<<endl;
        }

        cout<<endl;

    }


    return 0;
}
