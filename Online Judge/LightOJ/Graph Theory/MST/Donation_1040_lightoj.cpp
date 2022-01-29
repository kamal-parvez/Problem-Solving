#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct vertex
{
    int v;
    int w;

} ver;


struct pr_qu
{
    int u;
    int v;
    int w;

    bool operator<(const pr_qu &ob)const
    {
        return w>ob.w;
    }

} pr;


int node,sum;
bool vis[52];
priority_queue<pr_qu>pq;


void spaning(int u,vector<vertex>vec[])
{
    int i,j;

    vis[u]=true;

    for(i=0; i<vec[u].size(); i++)
    {
        ver = vec[u][i];

        if(vis[ver.v]==false)
        {
            pr.u=u;
            pr.v=ver.v;
            pr.w=ver.w;

            pq.push(pr);
        }
    }

    while(1)
    {
        if(pq.empty())return;

        pr = pq.top();
        pq.pop();

        if(vis[pr.v]==false)break;
    }

    sum+=pr.w;

    spaning(pr.v,vec);
}


int main()
{
    int t,i,w;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>node;

        vector<vertex>vec[52];
        int cable=0;

        for(int j=1; j<=node; j++)
        {
            for(int k=1; k<=node; k++)
            {
                cin>>w;

                cable+=w;

                if(w>0)
                {

                    ver.v=k;
                    ver.w=w;
                    vec[j].push_back(ver);

                    ver.v=j;
                    vec[k].push_back(ver);
                }
            }
        }

        for(int j=1; j<=node; j++)
        {
            vis[j]=false;

        }

        sum=0;

        spaning(1,vec);

        //cout<<"sum="<<sum<<endl;

        int res = cable-sum;
        int flag=1;

        for(int j=1; j<=node; j++)
        {
            if(vis[j]==false)
            {
                flag=0;
            }
            //cout<<vis[j]<<endl;
        }

        if(flag==1)
            cout<<"Case "<<i<<": "<<res<<endl;
        else
            cout<<"Case "<<i<<": -1"<<endl;


        /*for(int j=1; j<=node; j++)
        {
            cout<<j<<"th adj node"<<endl;
            for(int k=0; k<vec[j].size(); k++)
            {
                ver = vec[j][k];
                cout<<ver.v<<" "<<ver.w<<endl;
            }
        }*/
    }

    return 0;
}
