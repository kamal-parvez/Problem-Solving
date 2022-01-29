#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define White 1
#define Gray 2
#define Black 3
#define inf -1
#define Nil 4



struct Bridge{

    int node,edge,time,cnt,j;
    int d[100],f[100],color[100],low[100],prev[100];
    int ara[100][2];


    vector<int>vec[100];


    Bridge(){
        cnt=0;
        j=0;
    }


    void dfs(){

        int i;

        for(i=0;i<node;i++){

            color[i]=White;
            d[i]=inf;
            low[i]=0;
            prev[i]=Nil;
        }

        time=0;

        for(i=0;i<node;i++){

            if(color[i]==White){

                dfs_visit(i);
            }
        }

    }

    void dfs_visit(int u){

        time++;
        d[u]=time;
        color[u]=Gray;
        low[u]=time;
        int child=0;

        for(int i=0;i<vec[u].size();i++){

            int t=vec[u][i];

             if(t==prev[u])
                continue;

            if(color[t]==Gray){

                low[u]=min(low[u],d[t]);
            }

            else if(color[t]==White){

                prev[t]=u;

                dfs_visit(t);

                low[u]=min(low[u],low[t]);

            }

            if(d[u]<low[t]){
                ara[j][0]=u;
                ara[j][1]=t;
                cnt++;
                j++;
            }

        }

    }

};


int main(){

    Bridge bridge;

    int i,j,u,v,cnt=0;

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    cin>>bridge.node>>bridge.edge;

    for(i=0;i<bridge.edge;i++){

        cin>>u>>v;
        bridge.vec[u].push_back(v);
        bridge.vec[v].push_back(u);
    }

    bridge.dfs();

    cout<<"No of Bridges are : "<<bridge.cnt<<endl;

    cout<<"Bridges are :"<<endl;

    for(i=0;i<bridge.cnt;i++){
        cout<<bridge.ara[i][0]<<" ~~~~ "<<bridge.ara[i][1]<<endl;
    }

    printf("Shanto\n");
    return 0;
}

