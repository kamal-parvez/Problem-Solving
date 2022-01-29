#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define SZ 102
#define inf -1

int node,expense;
bool vis[SZ];
int flag;

struct vertex
{
    int u;
    int v;
    int val;

    bool operator<(const vertex &ob)const
    {
        if(flag==0)
            return val<ob.val;
        else
            return val>ob.val;
    }

} ver;

struct adj
{
    int v;
    int val;
} wire;


priority_queue<vertex>pq;
//vector<adj>vec[SZ];


void spaning(int u,vector<adj>vec[])
{
    vis[u]=true;
    int i,j;

    for(i=0; i<vec[u].size(); i++)
    {
        wire = vec[u][i];

        if(vis[wire.v]==false)
        {
            ver.u=u;
            ver.v=wire.v;
            ver.val=wire.val;
            pq.push(ver);
        }
    }

    while(1)
    {
        if(pq.empty())
            return;
        ver = pq.top();
        pq.pop();

        if(vis[ver.v]==false)break;
    }

    expense+=ver.val;

    spaning(ver.v,vec);
}




int main()
{
    int t,i,u,v,w,sum;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        vector<adj>vec[SZ];
        sum=0;
        cin>>node;

        while(true)
        {
            cin>>u>>v>>w;

            if(u==0 && v==0 && w==0)break;

            wire.v=v;
            wire.val = w;

            vec[u].push_back(wire);
            wire.v=u;
            vec[v].push_back(wire);
        }

        for(int j=0; j<=node; j++)
        {
            vis[j]=false;
        }

        flag=0;
        expense=0;
        spaning(0,vec);
        sum+=expense;

        for(int j=0; j<=node; j++)
        {
            vis[j]=false;
        }

        flag=1;
        expense=0;
        spaning(0,vec);
        sum+=expense;

        if(sum%2==0)
            cout<<"Case "<<i<<": "<<sum/2<<endl;
        else
            cout<<"Case "<<i<<": "<<sum<<"/2"<<endl;

        //vec.clear();
    }

    return 0;
}
