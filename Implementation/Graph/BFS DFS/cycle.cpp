#include<bits/stdc++.h>
using namespace std;

#define SZ 100
#define white 1
#define grey 2
#define black 3

struct graph{
    vector<int>ara[SZ];
    int node, edge;
    int color[SZ];
    bool flag = false;

    void dfs(){
        for(int i=0; i<node; i++){
            color[i] = white;
        }

        for(int i=0; i<node; i++){
            if(color[i] == white){
                dfs_visit(i);
            }
        }
    }

    void dfs_visit(int u){
        color[u] = grey;

        for(int i=0; i<ara[u].size(); i++){
            int x = ara[u][i];
            if(color[x] == white){
                dfs_visit(x);
            }
            else if(color[x] == grey){
                flag = true;
            }
        }
        color[u] = black;
    }
};


int main(){
    graph gp;
    cin>>gp.node>>gp.edge;
    int u, v;

    for(int i=0; i<gp.edge; i++){
        cin>>u>>v;
        gp.ara[u].push_back(v);
    }

    gp.dfs();
    if(gp.flag == true)
        cout<<"Cycle exists"<<endl;
    else
        cout<<"Cycle does not exist"<<endl;


    return 0;
}
