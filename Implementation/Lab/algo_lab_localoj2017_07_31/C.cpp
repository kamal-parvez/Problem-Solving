#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define White 1
#define Gray 2
#define Black 3
#define inf -1


struct breadth{

    int node,edge;
    int level[100000],vis[100000];
    vector < int > vec[100000];

    void bfs(int src){

        queue<int>q;

        int i,u,v;

        for(i=0;i<node;i++){
            vis[i]=0;
            level[i]=-1;
        }

        level[src]=0;
        vis[src]=1;

        q.push(src);

        while(!q.empty()){

            u=q.front();
            q.pop();

            for(i=0;i<vec[u].size();i++){

                v=vec[u][i];

                if(vis[v]==0){

                    level[v]=level[u]+1;
                    vis[v]=1;
                    q.push(v);
                }
            }

        }

    }

};


int main(){

    breadth br;

    int i,j,u,v,t;

    cin>>br.node;

    for(i=0;i<br.node-1;i++){

        cin>>u>>v;
        br.vec[u].push_back(v);
        br.vec[v].push_back(u);
    }

    br.bfs(0);

    int mx=-1;

    for(i=0;i<br.node;i++){

        if(mx<br.level[i])mx=br.level[i];
    }

    int path=2*(br.node-1)-mx;

    cout<<path<<endl;


    return 0;
}


