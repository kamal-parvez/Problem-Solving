#include<bits/stdc++.h>
using namespace std;


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

    int t,i,j,u,v,mx,x;

    breadth ds;

    cin>>ds.node;

    for(j=0;j<ds.node-1;j++){

        cin>>u>>v;
            //ds.ara[u][v]=1;
        ds.vec[u].push_back(v);
        ds.vec[v].push_back(u);
    }

    int a=0;

    ds.bfs(a);

    mx=-10;

    for(i=0;i<ds.node;i++){

        if(mx<ds.level[i])
        {
            x=i;
            mx=ds.level[i];
        }

    }


    ds.bfs(x);




    mx=-1;

    for(i=0;i<ds.node;i++){

        if(mx<ds.level[i])
        {
            mx=ds.level[i];
        }

    }

    cout<<mx<<endl;

    return 0;
}



