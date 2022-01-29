#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define White 1
#define Gray 2
#define Black 3
#define inf -1


struct component{

    int node,edge,time,mark;
    int d[100],f[100],color[100];

    vector<int>vec[100];
    vector<int>trans[100];
    vector<int>comp[100];
    stack<int>st;

    void dfs(){

        int i,u;

        for(i=0;i<node;i++){

            color[i]=White;
            d[i]=inf;
            f[i]=inf;
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

        for(int i=0;i<vec[u].size();i++){

            int t=vec[u][i];

            if(color[t]==White){

                dfs_visit(t);
            }
        }

        time++;
        f[u]=time;
        color[u]=Black;
        st.push(u);
    }


    void trans_dfs(){

        int i,u,t;

        for(i=0;i<node;i++){

            color[i]=White;
        }

        mark=0;


        while(!st.empty()){

            u=st.top();
            st.pop();

            if(color[u]==White){

                mark+=1;
                trans_dfs_visit(u);
            }
        }

    }

    void trans_dfs_visit(int u){

        color[u]=Gray;

        comp[mark].push_back(u);

        for(int i=0;i<trans[u].size();i++){

            int t=trans[u][i];

            if(color[t]==White){

                trans_dfs_visit(t);
            }
        }

        color[u]=Black;

    }

};


int main(){

    component com;

    freopen("ssc_in","r",stdin);

    int i,j,u,v,t;

    cin>>com.node>>com.edge;

    for(i=0;i<com.edge;i++){

        cin>>u>>v;
        //fscanf(fp,"%d %d",&u,&v);
        com.vec[u].push_back(v);
        com.trans[v].push_back(u);
        //com.ara[i][j]=1;
    }

    com.dfs();


    com.trans_dfs();

    for(i=1;i<=com.mark;i++){

        cout<<i<<" ";

        for(j=0;j<com.comp[i].size();j++){

            cout<<com.comp[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


