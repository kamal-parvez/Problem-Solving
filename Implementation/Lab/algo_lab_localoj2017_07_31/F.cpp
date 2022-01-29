#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define White 5
#define Black 6
#define Gray 7

struct depth{

    int node,edg,mx,cnt;
    int color[10000];

    vector<int>vec[10000];

    void dfs(){

        int i,u;

        for(i=0;i<node;i++){
            color[i]=White;
        }

        mx=-1;

        for(i=0;i<node;i++){

            if(color[i]==White){
                cnt=0;
                dfs_visit(i);
                mx=max(mx,cnt);
            }
        }

    }

    void dfs_visit(int u){

        color[u]=Gray;
        cnt++;

        for(int i=0;i<vec[u].size();i++){

            int t = vec[u][i];

            if(color[t]==White){

                dfs_visit(t);
            }

        }

        color[u]=Black;
    }
};


int main(){

    depth dep;

    char str[101][101];

    int m,n,i,j,t;

    cin>>n>>m;

    dep.node=n*m;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>str[i][j];
        }
    }

    t=0;

    for(i=0;i<n;i++){

        for(j=0;j<m;j++){

            if(str[i][j]=='.'){

                if(str[i+1][j] =='.')
                    dep.vec[t].push_back(t+m);

                if(str[i-1][j] =='.')
                    dep.vec[t].push_back(t-m);

                if(str[i][j+1] =='.')
                    dep.vec[t].push_back(t+1);

                if(str[i][j-1] =='.')
                    dep.vec[t].push_back(t-1);

            }

            t++;

        }

    }

    /*for(i=0;i<dep.node;i++){
        cout<<i<<"th node : ";
        for(j=0;j<dep.vec[i].size();j++){

            cout<<dep.vec[i][j]<<" ";

        }

        cout<<endl;
    }*/

    dep.dfs();

    cout<<dep.mx<<endl;

    return 0;
}

