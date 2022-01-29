#include<bits/stdc++.h>
using namespace std;


struct depth{

  int node,edge,res;
  int val[102];

  vector < int > vec[100];

  int dfs(int u){

    if(vec[u].size()==0){

        res=u;
        return 0;

    }

    int mx=vec[u][0];

    for(int i=1;i<vec[u].size();i++){

        int t=vec[u][i];

        if(val[mx] < val[t]){

            mx=t;

        }
    }

    return val[mx] + dfs(mx);

  }

};


int main(){

    int t,i,j,u,v,in,x;
    int dis[102],ending[102];

    depth ds;

    cin>>t;

    for(i=1;i<=t;i++){

        cout<<endl;
        cin>>ds.node>>ds.edge;

        for(j=0;j<ds.node;j++){

            cin>>ds.val[j];
        }

        for(j=0;j<ds.edge;j++){

            cin>>u>>v;
            //ds.ara[u][v]=1;
            ds.vec[u].push_back(v);
        }


        for(j=0;j<ds.node;j++){

            x = ds.dfs(j);

            dis[j]=x;
            ending[j]=ds.res;

        }

        x=dis[0];
        in=ending[0];

        for(j=1;j<ds.node;j++){

            if(x<dis[j]){

                x=dis[j];
                in=ending[j];
            }
        }

        cout<<"Case 1: "<<x<<" "<<in<<endl;

    }

    return 0;
}

