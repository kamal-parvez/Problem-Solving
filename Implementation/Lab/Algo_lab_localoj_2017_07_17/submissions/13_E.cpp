#include<vector>
#include<iostream>
#include<queue>
using namespace std;


struct breadth{

    int node,edge;
    int level[10002],vis[10002];
    vector < int > vec[10000];

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

    breadth bs;

    char str[101][101];

    int m,n,i,j,t;

    cin>>n>>m;

    bs.node=n*m;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>str[i][j];

    t=0;

    for(i=0;i<n;i++){

        for(j=0;j<m;j++){


            if(str[i][j]=='.'){

                if(str[i+1][j] =='.')
                    bs.vec[t].push_back(t+m);

                if(str[i-1][j] =='.')
                    bs.vec[t].push_back(t-m);

                if(str[i][j+1] =='.')
                    bs.vec[t].push_back(t+1);

                if(str[i][j-1] =='.')
                    bs.vec[t].push_back(t-1);

            }

            t++;

        }

    }

    /*for(i=0;i<bs.node;i++){

        for(j=0;j<bs.vec[i].size();j++){

            cout<<bs.vec[i][j]<<" ";

        }

        cout<<endl;
    }*/

    bs.bfs(0);

    cout<<bs.level[n*m-1]<<endl;


    return 0;

}
