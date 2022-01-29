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
    int d[102],f[102],color[102];
    vector<int>vec[102];
    stack<int>st;

    void dfs(){

        int i;

        for(i=1;i<=node;i++){

            color[i]=White;
            d[i]=inf;
            f[i]=inf;
        }

        time=0;

        for(i=1;i<=node;i++){

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

    int i,j,u,v;

    FILE *fp_in,*fp_out;
    fp_in=fopen("in.txt","r");
    fp_out=fopen("out.txt","w");

    while(1){



        topological top;
        //cin>>top.node>>top.edge;

        fscanf(fp_in,"%d %d",&top.node,&top.edge);

        if(top.node==0 && top.edge==0)break;

        for(i=0;i<top.edge;i++){

            //cin>>u>>v;
            fscanf(fp_in,"%d %d",&u,&v);
            top.vec[u].push_back(v);
        }

        /*cout<<" node and edges are ::::"<<top.node<<" "<<top.edge<<endl;

        for(i=1;i<=top.node;i++){
            cout<<i<<" th ::: ";
            for(j=0;j<top.vec[i].size();j++){
                cout<<top.vec[i][j]<<" ";
            }
            cout<<endl;
        }*/

        top.dfs();


        while(!top.st.empty()){

            cout<<top.st.top()<<" ";
            fprintf(fp_out,"%d ",top.st.top());
            top.st.pop();
        }

        fprintf(fp_out,"\n");
        cout<<endl;
    }

    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
