#include<bits/stdc++.h>
using namespace std;


struct breath{

    int node,edge;
    int level[100000],vis[100000];
    vector < int > vec[100000];

    int bfs(int src){

        queue<int>q;

        int i,u,v;

        for(i=0;i<node;i++){
            vis[i]=0;
            level[i]=-1;
        }

        level[src]=0;
        int mx=0;
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

                    if(mx<level[v])mx=level[v];
                }
            }

        }

        return mx;

    }


};


int main(){

    int t,i,j,u,v,in,mx;
    int dis[100000];

    breath ds;

    cin>>ds.node;

    for(j=0;j<ds.node-1;j++){

        cin>>u>>v;
            //ds.ara[u][v]=1;
        ds.vec[u].push_back(v);
        ds.vec[v].push_back(u);
    }

    j=0;

    for(i=0;i<ds.node;i++){

        if(ds.vec[i].size()==1)
        {
            dis[j]=i;
            j++;
        }

    }

    int leaf=j;

    for(i=0;i<leaf;i++){

        dis[i]=ds.bfs(dis[i]);

    }

    mx=dis[0];

    for(j=1;j<leaf;j++){

        if(mx<dis[j]){

            mx=dis[j];
        }
    }

    cout<<mx<<endl;

    return 0;
}


