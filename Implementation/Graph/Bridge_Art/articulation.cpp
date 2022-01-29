#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define White 1
#define Gray 2
#define Black 3
#define inf -1
#define Nil 4


struct articulation{

    int node,edge,time;
    int d[100],f[100],color[100],low[100],prev[100];
    bool critical[100];

    vector<int>vec[100];


    void dfs(){

        int i;

        for(i=0;i<node;i++){

            color[i]=White;
            d[i]=inf;
            low[i]=0;
            prev[i]=Nil;
            critical[i]=false;

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
                child+=1;
            }

            if(d[u]<=low[t] && prev[u]!=Nil){
                    critical[u]=true;
            }

            if(child>1 && prev[u]==Nil){
                critical[u]=true;
            }

        }

    }

};


int main(){

    articulation art;

    int i,j,u,v,cnt=0;


    cin>>art.node>>art.edge;

    for(i=0;i<art.edge;i++){

        cin>>u>>v;
        art.vec[u].push_back(v);
        art.vec[v].push_back(u);
    }

    art.dfs();

    cout<<"Articulation points are :"<<endl;

    for(i=0;i<art.node;i++){

        if(art.critical[i]==true){
           cout<<i<<" ";
            cnt++;
        }
    }

    cout<<endl;

    cout<<"No of art. point : "<<cnt<<endl;

    return 0;
}
