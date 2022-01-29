#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define White 1
#define Gray 2
#define Black 3
#define inf -1


struct topological{

    int node,edge,time;
    int d[100],f[100],color[100];
    vector<int>vec[100];
    stack<int>st;

    void dfs(){

        int i;

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

};


int main(){

    topological top;

    int i,j,u,v;

    cin>>top.node>>top.edge;

    for(i=0;i<top.edge;i++){

        cin>>u>>v;
        top.vec[u].push_back(v);
    }

    top.dfs();

    for(i=0;i<top.node;i++)
        cout<<top.f[i]<<" ";
    cout<<endl;

    while(!top.st.empty()){

        cout<<top.st.top()<<" ";
        top.st.pop();
    }

    cout<<endl;

    return 0;
}
