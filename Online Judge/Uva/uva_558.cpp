#include<bits/stdc++.h>
using namespace std;

#define SZ 1002
#define inf 1009

struct vertex{
    int in;
    int val;
}ver;


struct belman{
    int node,edge;
    int vis[SZ],dis[SZ];
   // int cost[SZ][SZ];
    int prev[SZ];

    vector<vertex>vec[SZ];

    bool ford(int src){
        int i,j,k;

        for(i=0;i<node;i++){
            dis[i]=inf;
            prev[i]=inf;
        }

        dis[src]=0;

        for(i=0;i<node-1;i++)
        {
            for(j=0;j<node;j++)
            {
                for(k=0;k<vec[j].size();k++)
                {
                    ver=vec[j][k];

                    if(ver.val + dis[j] < dis[ver.in]){
                        dis[ver.in] = ver.val + dis[j];
                        prev[k]=j;
                    }
                }
            }
        }
        for(j=0;j<node;j++)
        {
            for(k=0;k<vec[j].size();k++)
            {
                    ver=vec[j][k];

                    if(ver.val + dis[j] < dis[ver.in]){
                        return false;
                    }
            }
        }

        return true;

    }

};


int main()
{
    int i,j,u,v,w,k;

    int t;

    cin>>t;

    while(t--){

        belman bel;

        cin>>bel.node>>bel.edge;

       /* for(j=0;j<bel.node;j++){
            for(k=0;k<bel.node;k++){
                bel.cost[j][k]=inf;
            }
        }*/


        for(i=0;i<bel.edge;i++){
            cin>>u>>v>>w;
            ver.in=v;
            ver.val=w;
            bel.vec[u].push_back(ver);
        }


        bool res = bel.ford(0);

        if(res==false){
            cout<<"possible"<<endl;
        }
        else{
            cout<<"not possible"<<endl;
        }

    }

    return 0;
}


