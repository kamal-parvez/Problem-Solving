#include<bits/stdc++.h>
using namespace std;

#define SZ 1000
#define inf 100000


struct belman{
    int node,edge;
    int vis[SZ],dis[SZ];
    int cost[SZ][SZ];
    int prev[SZ];

    bool ford(int src){
        int i,j,k;

        for(i=0;i<node;i++){
            dis[i]=inf;
            prev[i]=inf;
        }

        dis[src]=0;

        for(i=0;i<node-1;i++){
            for(j=0;j<node;j++){
                for(k=0;k<node;k++){
                    if(cost[j][k]!=inf && cost[j][k]+dis[j]<dis[k]){
                        dis[k]=dis[j]+cost[j][k];
                        prev[k]=j;
                    }
                }
            }
        }
        for(j=0;j<node;j++){
            for(k=0;k<node;k++){
                if(cost[j][k]!=-1 && cost[j][k]+dis[j]<dis[k]){
                    return false;
                }
            }
        }

        return true;

    }

    void print_path(int u){
        if(u==inf)
            return;
        else
            print_path(prev[u]);
        cout<<u<<" ";
    }
};


int main()
{
    int i,j,u,v,w,k;
    belman bel;

    cout<<"Enter the no of node and edge "<<endl;

    cin>>bel.node>>bel.edge;

    cout<<"Enter the edges and their weight"<<endl;

    for(j=0;j<bel.node;j++){
        for(k=0;k<bel.node;k++){
            bel.cost[j][k]=inf;
        }
    }


    for(i=0;i<bel.edge;i++){
        cin>>u>>v>>w;
        bel.cost[u][v]=w;
    }

    int src,des;

    cout<<"Enter the source and destination "<<endl;;

    cin>>src>>des;

    bool res = bel.ford(src);

    if(res==false){
        cout<<"Negative cycle detected"<<endl;
    }
    else{
        for(i=0;i<bel.node;i++){
            if(bel.dis[i]!=inf)
                cout<<bel.dis[i]<<endl;
            else
                cout<<"path does not exist"<<endl;
        }
    }

    bel.print_path(des);

    return 0;
}

