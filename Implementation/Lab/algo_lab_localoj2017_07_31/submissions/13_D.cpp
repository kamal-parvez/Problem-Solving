#include<iostream>
#include<vector>
#include<stack>
using namespace std;


#define White 1
#define Grey 2
#define Black 3
#define inf -1

int indeg[100000];

struct strongly_connected_component{

    int node,edge,time,mark;
    int color[100000],dis[100000],fin[100000];

    vector<int>vec[100000];
    vector<int>trans[100000];
    vector<int>com[10000];

    stack<int>stk;

    void dfs(){

        int i;

        for(i=0;i<node;i++){
            color[i]=White;
            dis[i]=inf;
            fin[i]=inf;
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
        color[u]=Grey;
        dis[u]=time;

        for(int i=0;i<vec[u].size();i++){

            int t = vec[u][i];

            if(color[t]==White){
                dfs_visit(t);
            }
        }
        time++;
        fin[u]=time;
        color[u]=Black;
        stk.push(u);
    }

    void dfs_trans(){

        int i,u;

        for(i=0;i<node;i++){
            color[i]=White;
        }

        mark=0;

        while(!stk.empty()){

            u=stk.top();
            stk.pop();
            if(color[u]==White){
                mark++;
                dfs_visit_trans(u);
            }
        }
    }

    void dfs_visit_trans(int u){

        color[u]=Grey;
        com[mark].push_back(u);

        for(int i=0;i<trans[u].size();i++){

            int t = trans[u][i];

            if(color[t]==White){
                dfs_visit_trans(t);
            }
        }
        color[u]=Black;
    }
};


int main(){

    struct strongly_connected_component scc;
    int i,j,a,b,u,cnt=0,flag;


    cin>>scc.node>>scc.edge;

    for(i=0;i<scc.edge;i++){
        cin>>a>>b;
        scc.vec[a].push_back(b);
        scc.trans[b].push_back(a);
        indeg[b]+=1;
    }

    scc.dfs();
    scc.dfs_trans();


   /* for(i=1;i<=scc.mark;i++){
        cout<<i<<"th com----- ";
        for(j=0;j<scc.com[i].size();j++){
            cout<<scc.com[i][j]<<" ";
        }
        cout<<endl;
    }*/

    for(i=1;i<=scc.mark;i++){

        u=scc.com[i][0];

        if(scc.com[i].size()==1 && indeg[u]!=0){
            continue;
        }

        for(j=0;j<scc.node;j++){
            scc.color[j]=White;
        }

        flag=0;
        scc.dfs_visit(u);

        for(j=0;j<scc.node;j++){
            if(scc.color[j]==White)
                flag=1;
        }
        if(flag!=1)
            cnt+=scc.com[i].size();
    }

    cout<<cnt<<endl;

    return 0;
}
