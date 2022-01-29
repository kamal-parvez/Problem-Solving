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
    int d[10002],f[10002],color[10002];

    vector<int>vec[10002];
    vector<int>trans[10002];
    vector<int>comp[10002];
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

    int i,j,u,v,t;

    cin>>t;

    for(j=1;j<=t;j++)
    {
        //cout<<endl;

        cin>>com.node>>com.edge;

        for(i=0;i<com.edge;i++){

            cin>>u>>v;
            com.vec[u].push_back(v);
            com.trans[v].push_back(u);
        }

        com.dfs();

        com.trans_dfs();

        int cnt=0,x;

        for(i=1;i<=com.mark;i++){

            x=com.comp[i].size();

            if(x%2==1 && x>1)
            {
                cnt+=x;
            }
        }

        cout<<"Case "<<j<<": "<<cnt<<endl;
    }

    return 0;
}



