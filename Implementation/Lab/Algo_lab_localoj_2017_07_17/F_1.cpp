#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define white 1
#define grey 2
#define black 3
#define nil -9
#define inf -1

struct breadth{

    int node,edge;
    int color[10000],prev[10000],level[10000];

    int ara[1000][1000];
    //vector < int > vec[1000];

    void bfs(int src){

        queue < int > q;

        int u,i,j,v;

        for(i=0;i<node;i++){

            color[i]=white;
            prev[i]=nil;
            level[i]=inf;

        }

        level[src]=0;
        color[src]=grey;
        q.push(src);

        while(!q.empty()){

            u=q.front();
            q.pop();

            for(j=0;j<node;j++)
            {

                if(level[j]==inf && ara[u][j]==1)
                {
                    color[j]=grey;
                    level[j]=level[u]+1;
                    prev[j]=u;
                    q.push(j);
                }
            }
            color[u]=black;

        }


    }

    void print_path(int u)
    {
        if(prev[u]==nil){

            cout<<" "<<u;
            return;
        }

        print_path(prev[u]);
        cout<<" "<<u;

    }

};

int main(){

    breadth bs;

    int a,b;

    cin>>bs.node;
    cin>>bs.edge;

    for(int i=0;i<bs.edge;i++){

        cin>>a>>b;
        //bs.vec[a].push_back(b);
        bs.ara[a][b]=1;
        bs.ara[b][a]=1;
    }

    bs.bfs(0);

    for(int i=0;i<bs.node;i++){

        cout<<i<<":";
        if(bs.level[i]!=inf){

            bs.print_path(i);
            cout<<endl;
        }
        else
            cout<<" Not Reachable"<<endl;
    }


    /*for(int i=0;i<bs.node;i++)
    {
        cout<<bs.prev[i]<<" ";
    }
    cout<<endl;*/


    return 0;

}

